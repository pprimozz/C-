#include <iostream>
using namespace std;

template <class bucky>
bucky addCrap(bucky a, bucky b){
    return a+b;
}


int main()
{
   double x=7.34;
   double y= 43.32 , z;
   z= addCrap(x,y);
   cout<<z<<endl;
}
