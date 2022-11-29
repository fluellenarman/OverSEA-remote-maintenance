#include <string>
#include "geometry.h"
#include "constants.h"
#include "color.h"

using std::string;

class loginButton {
  public:

    loginButton() = delete;
    loginButton(rectangle loc, int size = 24, 
             colorRGB col = {245,245,232}, colorRGB textCol = {170,170,170}, const string& font = FONT_YKLIGHT, string inText = "") {

      location = loc;
      color = col;
      textColor = textCol;

      fontSize = size;
      textFont = font;
      text = inText;
    }

    void render();
    void processInput();
    bool clicked();
    bool auth();

  private:

    void updateClicked();




    rectangle location;
    colorRGB color;
    colorRGB textColor;
    int fontSize;
    string textFont;
    string text;


    bool isClicked = false;

};
