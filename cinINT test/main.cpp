#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter number: " << endl;
    cin>>x;
    if(!cin)
    {
        cout<<"Enter a valid number!"<<endl;
    } else
    {
        cout<<x;
    }
    return 0;
}
