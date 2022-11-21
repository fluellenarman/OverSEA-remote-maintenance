#include "controller.h"
#include "../depend/logq/src/log.h"

void controller::init() {

  fontMap.insert(make_pair(FONT_YKLIGHT, map<int, Font>{}));
  fontMap.insert(make_pair(FONT_CAMO, map<int, Font>{}));

  // init wsClient client
  client.init();

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

void drawLineEx(float xi, float yi, float xf, float yf, float thick, const colorRGB& col) {
  Color color = (Color){(unsigned char)col.r, (unsigned char)col.g, (unsigned char)col.b, 255};
  DrawLineEx((const Vector2){(float)xi, (float)yi}, (const Vector2){(float)xf, (float)yf}, thick, color);
}

const Vector2 controller::measureTextEx(const string& msg, int size, const string& font) {
  Font* ft = getFont(font, size);
  return MeasureTextEx(*ft, msg.c_str(), ft->baseSize, 0);
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
  // check for websocket updates here, end render loop
  client.receive();

  char_pressed.clear();
  int key = GetCharPressed();
  while (key > 0) {
    char_pressed.push_back(key);
    key = GetCharPressed();
  }
}

// wsClient functions
void controller::sendData(int portNum, const string& data) {
  // send data to a port number
  client.setPort(portNum);
  client.send(data);

} 

void controller::cleanup() {
  //clean up websocket after while(render)
  client.clean();
}
