#include "input.h"
#include "data.h"
#include "../depend/logq/src/log.h"
    
#if defined(DEPEND_CROSS)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

void inputBox::render() {
  ctr.drawRectangle(location, color);


  //measure text ex
  Vector2 textDim = ctr.measureTextEx(text, fontSize);
  
  // align = 0, center
  // align = 1, left aligned
  // align != 0/1, center

  int posX;
  int posY;
  // left aligned
  posX = fontSize/2;
  posY = location.height/2 - textDim.y/2;
  Vector2 pos = {static_cast<float>(posX+location.x), static_cast<float>(posY+location.y)};

  ctr.drawRectangle({static_cast<int>(pos.x), static_cast<int>(pos.y), location.width-2*posX, location.height-2*posY},
                    {255,0,0});
 
  BeginScissorMode(static_cast<int>(pos.x), static_cast<int>(pos.y), location.width-2*posX, location.height-2*posY);
  ctr.drawTextEx(text.c_str(), pos, textColor, fontSize, textFont);
  EndScissorMode();
}

bool inputBox::clicked() {
  return isClicked;
}

void inputBox::updateClicked() {
  if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    isClicked = ctr.cursorInBox(location);
  }
}

void inputBox::processInput() {

  if (isClicked){

    //while (key > 0){
    for(const auto key : ctr.char_pressed) {
      if ((key >= 32) && (key <= 125)) {
        text += key;
      }
    }

    if (IsKeyDown(KEY_BACKSPACE) && !(ctr.getFrameCounter() % 5)) {
      if(text.length() > 0){
        text.pop_back();
      }
    }
  }

}
