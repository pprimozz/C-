#include <iostream>

using namespace std;

int main()
{
    try {
        int momsAge=30;
        int sonsAge=30;

        if(sonsAge >= momsAge){
            throw 99;
          }
    }
    catch (int x){
    cout<<"son can not be older or the same age as mom, ERROR NUMBER: " << x <<endl;
    }
}
