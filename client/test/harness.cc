#include <string>
#include <vector>

#include <criterion/criterion.h>
#include <criterion/logging.h>

#include "../src/input.h"
#include "../src/controller.h"

using criterion::logging::info;
using criterion::logging::warn;
using criterion::logging::error;

using std::vector;
using std::string;

//int main() {return 0;}

controller ctr;

Test(generator, show)
{
    vector<string> empty = { };

    cr_expect(empty.size()==0);


    vector<int> some = { 1, -2, 3 };

    cr_assert(true);
}
