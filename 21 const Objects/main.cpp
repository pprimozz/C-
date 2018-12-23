#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    Sally sa;
    sa.printShiz();

    const Sally constObj;
    constObj.printShiz2();
}
