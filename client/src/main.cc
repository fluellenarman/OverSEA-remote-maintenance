
#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include <string>
#include "../depend/logq/src/log.h"
#include "controller.h"
#include "enum.h"
#include "geometry.h"


#define MAX_INPUT_CHARS 10

using std::string;

constexpr int window_w = 1600;
constexpr int window_h = 900;
const string window_title = "OverSEA receiver client ver.0";

constexpr rectangle login_button_position = {window_w/2 - 100, window_h/2 - 50, 200, 100};
constexpr rectText login_button_position_but = {{window_w/2 - 100, window_h/2 - 50, 200, 100},40};


sceneType current_scene = sceneType::SCENE_LOGIN;


controller ctr;

int main() {

  logW(LL_INFO, window_title);

  SetTraceLogLevel(LOG_ERROR);
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);
  logW(LL_INFO, "window initialization OK");

  ctr.init();
  bool login_input_but = false;
  bool cursorExists = false;
  string name = "";
  int letterCount = 0;

  while (!WindowShouldClose()) {

    ctr.beginRender();

    switch(current_scene) {
      case sceneType::SCENE_TEST:
        ctr.drawTextEx(window_title.c_str(), {200.0f, 200.0f}, {12,24,244}, 24, FONT_CAMO);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 300.0f}, {12,24,244}, 50, FONT_CAMO);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 400.0f}, {12,24,244}, 150);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 500.0f}, {12,24,244}, 340, FONT_CAMO);
        break;
      case sceneType::SCENE_LOGIN:
        ctr.drawTextInputBox(login_button_position_but,login_input_but,cursorExists,{235,235,235},{43,34,23},name);

        if (login_input_but) {
          cursorExists = (name.length() < MAX_INPUT_CHARS) ? ((ctr.getFrameCounter()/20)%2) == 0 : false;
        }
        break;
      default:
        break;
    }
   


    // user input logic
    
    switch(current_scene) {
      case sceneType::SCENE_LOGIN:
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
          login_input_but = ctr.cursorInBox(login_button_position);
        }

        if (login_input_but){
          int key = GetCharPressed();

          while (key > 0){
            if ((key >= 32) && (key <= 125) && (name.length() < MAX_INPUT_CHARS)){
              name += key;
              letterCount++;
            }
            key = GetCharPressed();
          }

          if (IsKeyPressed(KEY_BACKSPACE)){
            if(name.length() > 0){
              name.pop_back();
            }
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

