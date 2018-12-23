#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("OMG i think i am preggy!!");
    cout << s1.substr(17, 8)<<endl;

    //----------------------------------------

    string one("apples ");
    string two("beans ");

    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;

    //-----------------------------------------

    string x("ham is spam yes i am!");
    cout << x.rfind("am") << endl;
}
