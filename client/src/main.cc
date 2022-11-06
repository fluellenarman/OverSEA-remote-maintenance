
#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include <string>
#include "../depend/logq/src/log.h"
#include "controller.h"

using std::string;

constexpr int window_w = 1600;
constexpr int window_h = 900;
const string window_title = "OverSEA receiver client ver.0";

controller ctr;

int main() {

  logW(LL_INFO, window_title);

  SetTraceLogLevel(LOG_ERROR);
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);
  logW(LL_INFO, "window initialization OK");

  while (!WindowShouldClose()) {
    ctr.beginRender();
      ctr.drawTextEx(window_title.c_str(), {200.0f, 200.0f}, {12,24,244});
      ctr.drawTextEx(window_title.c_str(), {200.0f, 300.0f}, {12,24,244}, 50);
      ctr.drawTextEx(window_title.c_str(), {200.0f, 400.0f}, {12,24,244}, 150);
    ctr.endRender();
  }



  ctr.unload();
  return 0;
}
