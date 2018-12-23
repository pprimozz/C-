#include <iostream>
#include <string> // gives you string functions

using namespace std;

int main()
{
    string x;
    getline(cin, x);

    cout <<"the string i entered is: "<< x <<endl;
//--------------------------------------------------------------

    string s1("\n\nsadsadsad");
    string s2;
    string s3;

    s2 = s1;        // oboje naredi isto
    s3.assign(s1);  // oboje naredi isto

    cout << s1 << s2 << s3 << endl;

    //-------------------------------------------------

    string y = "\n\nsdfasdfasdf";
    cout << y.at(3);

    for(int z=0; z<y.length(); z++){
        cout << y.at(z);
    }
}
