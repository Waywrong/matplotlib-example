#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main(void) 
{
    plt::plot({1,2,3,4});
    plt::show();

    return 0;
}