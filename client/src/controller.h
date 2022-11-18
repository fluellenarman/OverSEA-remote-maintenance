#pragma once

#if defined(DEPEND_CROSS)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include "../depend/logq/src/log.h"

#include <string>
#include <unordered_map>
#include <vector>
#include <map>
#include "color.h"
#include "geometry.h"
#include "constants.h"

using std::string;
using std::unordered_map;
using std::map;
using std::vector;
using std::pair;
using std::move;
using std::is_same;

class controller {
  public:


    void init();

    Font* getFont(const string& font, int size);
    const Vector2 measureTextEx(const string& msg, int size = 14, const string& font = FONT_YKLIGHT);
    void drawTextEx(const string& msg, const Vector2& pos, const colorRGB& col, 
                    int size = 24, const string& font = FONT_YKLIGHT);
    void drawRectangle(rectangle rect, const colorRGB& col);
    void drawRectLines(rectangle rect, const colorRGB& col);
    void drawRectwithLines(rectangle rect, const colorRGB& rectCol, const colorRGB& linesCol);
    void drawRectText(rectText rectT, const colorRGB& rectCol, const colorRGB& textCol, const string text, 
                      const int align = 0, const string& font = FONT_YKLIGHT);
    Vector2 getTextPos(rectText rectT, string text, const int align);
    void drawTextInputBox(rectText rectT, bool input, bool cursor, const colorRGB& rectCol, const colorRGB& textCol, 
                          string text, const int align = 1, const string& font = FONT_YKLIGHT);

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


    bool anyKeyPressed();
    unsigned int getFrameCounter() { return counter; }

    void beginRender();
    void endRender();


    void update();
    void unload();

    vector<int> char_pressed;

  private:

    unordered_map<string, map<int, Font>> fontMap;


    unsigned int counter = 0;


};
