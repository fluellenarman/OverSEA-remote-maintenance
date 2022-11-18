#include <string>
#include "geometry.h"
#include "constants.h"
#include "color.h"

using std::string;

class inputBox {
  public:

    inputBox() = delete;
    inputBox(rectangle loc, int size = 24, 
             colorRGB col = {245,245,232}, colorRGB textCol = {170,170,170}, const string& font = FONT_YKLIGHT) {

      location = loc;
      color = col;
      textColor = textCol;

      fontSize = size;
      textFont = font;
    }

    void render();
    void processInput();
    bool clicked();

  private:

    void updateClicked();




    rectangle location;
    colorRGB color;
    colorRGB textColor;
    int fontSize;
    string textFont;
    string text = "";


    bool isClicked = false;

};
