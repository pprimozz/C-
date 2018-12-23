#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckysFile("beef.txt");

    if(buckysFile.is_open()){


    cout<<"the file is open"<<endl;
    }

        else
    {
        cout<<"not open"<<endl;
    }

    buckysFile<< "i love the beef\n";
    buckysFile.close();
}
