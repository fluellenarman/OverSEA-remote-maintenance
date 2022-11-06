
#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include <string>
#include "../depend/logq/src/log.h"
#include "controller.h"
#include "enum.h"
#include "rectangle.h"

using std::string;

constexpr int window_w = 1600;
constexpr int window_h = 900;
const string window_title = "OverSEA receiver client ver.0";

constexpr rectangle login_button_position = {window_w/2 - 100, window_h/2 - 50, 200, 100};
constexpr rectText login_button_position_but = {window_w/2 - 100, window_h/2 - 50, 200, 100,24};


sceneType current_scene = sceneType::SCENE_LOGIN;


controller ctr;

int main() {

  logW(LL_INFO, window_title);

  SetTraceLogLevel(LOG_ERROR);
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);
  logW(LL_INFO, "window initialization OK");

  while (!WindowShouldClose()) {
    ctr.beginRender();

    switch(current_scene) {
      case sceneType::SCENE_TEST:
        ctr.drawTextEx(window_title.c_str(), {200.0f, 200.0f}, {12,24,244});
        ctr.drawTextEx(window_title.c_str(), {200.0f, 300.0f}, {12,24,244}, 50);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 400.0f}, {12,24,244}, 150);
        break;
      case sceneType::SCENE_LOGIN:
        //ctr.drawRectangle(login_button_position, {120, 12, 255});
        ctr.drawRectText(login_button_position_but, {120, 12, 255}, {0,0,0}, "button");
        break;
      default:
        break;
    }
   


    // user input logic
    
    switch(current_scene) {
      case sceneType::SCENE_LOGIN:
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
          if (ctr.cursorInBox(login_button_position)) {
              logQ("clicked in box");
              current_scene=sceneType::SCENE_TEST;
          }
        }
        break;
      default:
        break;
    }


    ctr.endRender();
  }



  ctr.unload();
  return 0;
}
