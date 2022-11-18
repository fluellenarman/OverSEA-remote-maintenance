#include "controller.h"
#include "../depend/logq/src/log.h"

void controller::init() {

  fontMap.insert(make_pair(FONT_YKLIGHT, map<int, Font>{}));
  fontMap.insert(make_pair(FONT_CAMO, map<int, Font>{}));

}

Font* controller::getFont(const string& id, int size) {
  // find if a font with this id exists
  auto fit = fontMap.find(id);
  if (fit == fontMap.end()) {
    logW(LL_CRIT, "invalid font id -", id);
    return nullptr;
  }
  // if this font exists, find map of font size to font pointer
  auto it = fit->second.find(size);
  if (it == fit->second.end()){ 
    // if end is reached, this font combination doesn't exist and needs to be created
    logQ("loading", id, "with size", size);
    Font tmp = LoadFontEx(id.c_str(), size, nullptr, 255);
    SetTextureFilter(tmp.texture, TEXTURE_FILTER_BILINEAR);
    fit->second.insert(make_pair(size, move(tmp)));
  }

  return &fit->second.find(size)->second;
  
}

void controller::drawTextEx(const string& msg, const Vector2& pos, const colorRGB& col, int size, const string& font) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawTextEx(*getFont(font, size), msg.c_str(), pos, getFont(font, size)->baseSize, 0, color);
}
    
void controller::drawRectangle(rectangle rect, const colorRGB& col) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawRectangle(rect.x, rect.y, rect.width, rect.height, color);
}
  
void controller::drawRectLines(rectangle rect, const colorRGB& col) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawRectangleLines(rect.x, rect.y, rect.width, rect.height, color);
}

void controller::drawRectwithLines(rectangle rect, const colorRGB& rectCol, const colorRGB& linesCol){
  Color rectColor = (Color){(unsigned char)rectCol.r, (unsigned char)rectCol.g, (unsigned char)rectCol.b, 255};
  Color linesColor = (Color){(unsigned char)linesCol.r, (unsigned char)linesCol.g, (unsigned char)linesCol.b, 255};
  DrawRectangle(rect.x, rect.y, rect.width, rect.height, rectColor);
  DrawRectangleLines(rect.x, rect.y, rect.width, rect.height, linesColor);
}

const Vector2 controller::measureTextEx(const string& msg, int size, const string& font) {
  Font* ft = getFont(font, size);
  return MeasureTextEx(*ft, msg.c_str(), ft->baseSize, 0);
}

void controller::drawRectText(rectText rectT, const colorRGB& rectCol, const colorRGB& textCol, string text,
                              const int align, const string& font ) {
  drawRectangle(rectT.rect, rectCol);

  //measure text ex
  Vector2 textDim = measureTextEx( text, rectT.fontSize );
  
  // align = 0, center
  // align = 1, left aligned
  // align != 0/1, center

  float posX;
  float posY;
  if (align != 1){
    // center
    posX = rectT.rect.x + rectT.rect.width/2 - textDim.x/2;
    posY = rectT.rect.y + rectT.rect.height/2 - textDim.y/2;
  }
  else{
    // left aligned
    posX = rectT.rect.x + rectT.fontSize/2;
    posY = rectT.rect.y + rectT.rect.height/2 - textDim.y/2;
  }
  Vector2 pos = {posX, posY};
  drawTextEx(text, pos, textCol, rectT.fontSize, font);
}

Vector2 controller::getTextPos(rectText rectT, string text, const int align){
  Vector2 textDim = measureTextEx( text, rectT.fontSize );
  float posX;
  float posY;
  if (align != 1){
    // center
    posX = rectT.rect.x + rectT.rect.width/2 - textDim.x/2;
    posY = rectT.rect.y + rectT.rect.height/2 - textDim.y/2;
  }
  else{
    // left aligned
    posX = rectT.rect.x + rectT.fontSize/2;
    posY = rectT.rect.y + rectT.rect.height/2 - textDim.y/2;
    
  }

  Vector2 pos = {posX, posY};
  return pos;
}

void controller::drawTextInputBox(rectText rectT, bool input, bool cursor, const colorRGB& rectCol, const colorRGB& textCol, 
                                  string text, const int align, const string& font ){

  drawRectText(rectT, rectCol, textCol, text, align, font);
  Color textColor = (Color){(unsigned char)textCol.r, (unsigned char)textCol.g, (unsigned char)textCol.b, 255};
  Vector2 textPos = getTextPos(rectT, text, align);
  Vector2 textDim = measureTextEx( text, rectT.fontSize );
  
  if(cursor){
    DrawText("_", (int)textPos.x + textDim.x, (int)textPos.y, rectT.fontSize, textColor);
  }
  
  if(input){
    // red
    drawRectLines(rectT.rect,{245,25,25});
  }
  else{
    // black
    drawRectLines(rectT.rect,{0,0,0});
  }
}

bool controller::cursorInBox(const rectangle& box) {
  return pointInBox(GetMousePosition(), box);
}

void controller::unload() {
  for (const auto& item : fontMap) {
    for (const auto& font : item.second) {
      UnloadFont(font.second);
    }
  }
  CloseWindow();
}
    
void controller::beginRender() {
  BeginDrawing();
  ClearBackground(WHITE);
}

void controller::endRender() {
  EndDrawing();
  counter++;
}

bool controller::anyKeyPressed() {
    bool keyPressed = false;
    int key = GetKeyPressed();

    if ((key >= 32) && (key <= 126)) keyPressed = true;

    return keyPressed;

    return char_pressed.size() > 0;
}

void controller::update() {
  char_pressed.clear();
  int key = GetCharPressed();
  while (key > 0) {
    char_pressed.push_back(key);
    key = GetCharPressed();
  }
}
