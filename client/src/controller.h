
#if defined(LOCRAY)
#include "../depend/raylib/src/raylib.h"
#else
#include <raylib.h>
#endif


#include <string>
#include <unordered_map>
#include "color.h"

using std::string;
using std::unordered_map;
using std::pair;
using std::move;

class controller {
  public:

    Font& getFont(int size);
    void drawTextEx(const string& msg, const Vector2& pos, const colorRGB& col, 
                    int size = 24);

    void beginRender();
    void endRender();


    void unload();

  private:

    unordered_map<int, Font> fontMap;



};
