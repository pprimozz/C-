#include "Sally.h"
#include <iostream>
using namespace std;


Sally::Sally()
{
    //ctor
}

void Sally::printShiz(){
    cout<<"i am a regular function"<<endl;
}

void Sally::printShiz2() const {
    cout<<"I am the constant fucntion"<<endl;
}
