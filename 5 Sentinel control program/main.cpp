#include <iostream>
using namespace std;

int main()
{
    int age;
    int agetotal = 0;
    int numberofPeopleEntered =0;

    cout<<"Enter first persons age or -1 to quit"<<endl;
    cin>> age;

    while(age != -1){
    agetotal+=age;
    numberofPeopleEntered++;

    cout<<"Enter next persons age or-1 to quit"<<endl;
    cin >>age;
    }

    cout <<"Number of people entered: " << numberofPeopleEntered<<endl;
    cout << "Average age: " <<agetotal/numberofPeopleEntered;
    return 0;
}
