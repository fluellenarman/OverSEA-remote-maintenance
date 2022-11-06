#pragma once

struct rectangle {
  int x;
  int y;
  int width;
  int height;
};

struct rectText {
  rectangle rect;
  int fontSize = 24;
};

struct point {
  int x;
  int y;
};
