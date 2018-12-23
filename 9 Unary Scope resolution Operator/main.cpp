#include <iostream>

using namespace std;

int tuna = 21;

int main()
{
    int tuna= 20;
    cout << ::tuna <<endl;   //use global tune (outside main function)
}

