#include <iostream>
using namespace std;

void getAge(int& x)
    {
        x+=5;
    }

int main()
{
    int age;
    cout<<"Enter Age: "<<endl;
    cin>>age;
    getAge(age);

    cout<<age<<endl;

    return 0;
}
