#include <string>
#include "geometry.h"
#include "constants.h"
#include "color.h"

using std::string;

class inputBox {
  public:

    inputBox() = delete;
    inputBox(rectangle loc, int size = 24, 
             colorRGB col = {100,120,244}, colorRGB textCol = {170,170,170}, const string& font = FONT_YKLIGHT) {

      location = loc;
      color = col;
      textColor = textCol;

      fontSize = size;
      textFont = font;
    }

    void render();
    void processInput();
    bool clicked();
    void updateClicked();

  private:





    rectangle location;
    colorRGB color;
    colorRGB textColor;
    int fontSize;
    string textFont;
    string text = "hello world";


    bool isClicked = false;

};
