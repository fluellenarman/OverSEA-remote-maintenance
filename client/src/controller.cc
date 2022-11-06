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
  DrawTextEx(getFont(size), msg.c_str(), pos, 
             getFont(size).baseSize, 0, color);
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
