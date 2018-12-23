#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
using namespace std;

string binaryToString(string x);
int intToBinary(int x);


int main()
{
    int x=10;
    string s = bitset< 4 >( x ).to_string();
    cout << s << endl;
    return 0;
}

