
#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif

#include <string>
#include "../depend/logq/src/log.h"

using std::string;

constexpr int window_w = 1280;
constexpr int window_h = 720;
constexpr int font_size = 24;
const string window_title = "OverSEA receiver client ver.0";

int main(int argc, char** argv) {

  logW(LL_INFO, window_title);

  SetTraceLogLevel(LOG_ERROR);
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);

  #if defined(LOCRAY)
  Font f = LoadFont("./yklight.ttf");
  #else
  Font f = LoadFont("bin/yklight.ttf");
  #endif
 

  logW(LL_INFO, "window initialization OK");

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(WHITE);
      DrawTextEx(f, window_title.c_str(), {200.0f, 200.0f}, font_size, 0, RED);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
