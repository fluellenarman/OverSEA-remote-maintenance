#include <string>
#include <vector>

#include <criterion/criterion.h>
#include <criterion/logging.h>

#include "../src/input.h"
#include "../src/controller.h"
#include "../src/geometry.h"

using criterion::logging::info;
//using criterion::logging::warn;
//using criterion::logging::error;

using std::string;
using std::endl;

//int main() {return 0;}

controller ctr;

Test(input_method, input_clicked) {

  info << "testing input button click detector" << endl;

  inputBox box({10,10,1,1});


  // without rendering, the button cannot be shown as clicked
  cr_assert(!box.clicked());

}
