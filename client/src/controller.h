#pragma once

#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include "../depend/logq/src/log.h"

#include <string>
#include <unordered_map>
#include "color.h"
#include "rectangle.h"

using std::string;
using std::unordered_map;
using std::pair;
using std::move;
using std::is_same;

class controller {
  public:

    Font& getFont(int size);
    void drawTextEx(const string& msg, const Vector2& pos, const colorRGB& col, 
                    int size = 24);
    void drawRectangle(rectangle rect, const colorRGB& col);
    void drawRectText(rectText rectT, const colorRGB& rectCol, const colorRGB& textCol, const string text);

    bool cursorInBox(const rectangle& box);
    template<class T>
    bool pointInBox(const T& pt, const rectangle& box) {
      if constexpr (is_same<T, Vector2>::value || is_same<T, point>::value) {
        return static_cast<int>(pt.x) >= box.x && static_cast<int>(pt.x) < box.x + box.width &&
              static_cast<int>(pt.y) >= box.y && static_cast<int>(pt.y) < box.y + box.height;
      }
    
    logW(LL_WARN, "call to", __func__, "using invalid type", typeid(T).name());
    return false;
  }
    void beginRender();
    void endRender();


    void unload();

  private:

    unordered_map<int, Font> fontMap;



};
