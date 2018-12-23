#include <iostream>

using namespace std;

void printArray(int theArray[],int sizeOfArray);


int main()
{
   int bucky[3] = {23,42,532};
   int jessica[6] = {34,354,324,45,3,2};

   printArray(jessica, 6);
}

void printArray(int theArray[],int sizeOfArray){

    for(int x=0;x<sizeOfArray; x++){
        cout<<theArray[x]<<endl;
    }
}
