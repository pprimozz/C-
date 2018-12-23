#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
    Birthday birthObj(12,28,1986);

    People buckyR("Bucky",birthObj);
    buckyR.printInfo();
}
