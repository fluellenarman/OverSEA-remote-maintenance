
#if defined(DEPEND_CROSS)
#include "../depend/raylib/src/raylib.h"
//#include "../depend/opencv/include/opencv2/opencv.hpp"
//#include "../depend/easywsclient/easywsclient.hpp"
#else
#include <raylib.h>
#include <opencv4/opencv2/opencv.hpp>
//#include "../depend/easywsclient/easywsclient.hpp"
#endif

#include <string>
#include "../depend/logq/src/log.h"
//#include "../depend/sr_webcam/src/sr_webcam.h"
//#include "../depend/sr_webcam/src/sr_webcam_internal.h"
#include "controller.h"
#include "enum.h"
#include "geometry.h"
#include "input.h"

#define MAX_INPUT_CHARS 10

using std::string;

constexpr int window_w = 1600;
constexpr int window_h = 900;
const string window_title = "OverSEA receiver client ver.0";

sceneType current_scene = sceneType::SCENE_LOGIN;

controller ctr;

inputBox login_button({window_w/2 - 100, window_h/2 - 50, 200, 100}, 40);

int main() {

  logW(LL_INFO, window_title);
  //cv::Mat image = cv::imread("bin/cvtest.png");
  //cv::Mat image; 
  //int capID = 0;
  //cv::VideoCapture cap(capID);

  //if (!cap.isOpened()) {
    //logW(LL_WARN, "unable to open capture device:", capID);
  //}

  //cv::imshow("test",image);


  //using easywsclient::WebSocket;

  int devices = 0;
  #if defined (DEPEND_CROSS)
  #endif

  SetTraceLogLevel(LOG_ERROR);
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);
  SetExitKey(KEY_F7);
  logW(LL_INFO, "window initialization OK");

  ctr.init();

  while (!WindowShouldClose()) {

    //logQ(devices);
    ctr.beginRender();

    ctr.sendData(8126, "hello");

    switch(current_scene) {
      case sceneType::SCENE_TEST:
        ctr.drawTextEx(window_title.c_str(), {200.0f, 200.0f}, {12,24,244}, 24, FONT_CAMO);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 300.0f}, {12,24,244}, 50, FONT_CAMO);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 400.0f}, {12,24,244}, 150);
        ctr.drawTextEx(window_title.c_str(), {200.0f, 500.0f}, {12,24,244}, 340, FONT_CAMO);
        break;
      case sceneType::SCENE_LOGIN:
        //ctr.drawTextInputBox(login_button_position_but,login_input_but,cursorExists,{235,235,235},{43,34,23},name);



        login_button.render();

        //if (login_input_but) {
          //cursorExists = (name.length() < MAX_INPUT_CHARS) ? ((ctr.getFrameCounter()/20)%2) == 0 : false;
        //}
        break;
      default:
        break;
    }
  

    // user input logic
    
    switch(current_scene) {
      case sceneType::SCENE_LOGIN:
        login_button.processInput();
        if (IsKeyPressed(KEY_ENTER)) {
          current_scene = sceneType::SCENE_TEST;
        }
        break;
      default:
        break;
    }

    ctr.update();

    ctr.endRender();
  }


  ctr.cleanup();
  ctr.unload();
  return 0;
}

