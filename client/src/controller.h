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
#include "wsclient.h"

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
    void drawLineEx(float xi, float yi, float xf, float yf, float thick, const colorRGB& col);

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

    // wsClient functions
    void sendData(int portNum, const string& data); // send data to a port number
    void cleanup(); //clean up websocket after while(render)

    void beginRender();
    void endRender();


    void update();
    void unload();

    vector<int> char_pressed;

  private:

    unordered_map<string, map<int, Font>> fontMap;
    wsClient client;


    unsigned int counter = 0;


};
