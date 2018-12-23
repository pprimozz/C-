#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << sizeof(c)<<endl;

    int i;
    cout << sizeof(i)<<endl;

    double b;
    cout<<sizeof(b)<<endl;

    double bucky[10];
    cout<<sizeof(bucky)<<endl;

    cout<< sizeof(bucky) /sizeof(bucky[0])<<endl;

}
