
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
const string window_title = "OverSEA receiver v0";

int main(int argc, char** argv) {
  InitWindow(window_w, window_h, window_title.c_str());
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
