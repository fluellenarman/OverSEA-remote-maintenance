#include "controller.h"
#include "../depend/logq/src/log.h"

Font& controller::getFont(int size) {
  // if not in map then load that font
  auto it = fontMap.find(size);
  if (it == fontMap.end()){ 

    #if defined(LOCRAY)
    string f = "./yklight.ttf";
    #else
    string f = "bin/yklight.ttf";
    #endif


    logW(LL_INFO, "loading default font (yklight) w/size:", size);

    Font tmp = LoadFontEx(f.c_str(), size, nullptr, 255); 

    SetTextureFilter(tmp.texture, TEXTURE_FILTER_BILINEAR);
    
    fontMap.insert(pair<int, Font>(size, move(tmp)));
  
    it = fontMap.find(size);
  }

  
  return it->second;
  
}

void controller::drawTextEx(const string& msg, const Vector2& pos, const colorRGB& col, int size) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawTextEx(getFont(size), msg.c_str(), pos, getFont(size).baseSize, 0, color);
}
    
void controller::drawRectangle(rectangle rect, const colorRGB& col) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawRectangle(rect.x, rect.y, rect.width, rect.height, color);
}
    
const Vector2 controller::measureTextEx(const string& msg, int size) {
  Font& ft = getFont(size);
  return MeasureTextEx(ft, msg.c_str(), ft.baseSize, 0);
}

void controller::drawRectText(rectText rectT, const colorRGB& rectCol, const colorRGB& textCol, string text) {
  drawRectangle(rectT.rect, rectCol);

//measure text ex
  Vector2 textDim = measureTextEx( text, rectT.fontSize );
  float posX = rectT.rect.x + rectT.rect.width/2 - textDim.x/2;
  float posY = rectT.rect.y + rectT.rect.height/2 - textDim.y/2;
  Vector2 pos = {posX, posY};
  drawTextEx(text, pos, textCol, rectT.fontSize);
}

bool controller::cursorInBox(const rectangle& box) {
  return pointInBox(GetMousePosition(), box);
}

void controller::unload() {
  for (auto f : fontMap) {
    UnloadFont(f.second);
  }
  CloseWindow();
}
    
void controller::beginRender() {
  BeginDrawing();
  ClearBackground(WHITE);
}
void controller::endRender() {
  EndDrawing();
}
