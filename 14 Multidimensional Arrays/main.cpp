#include <iostream>

using namespace std;

int main()
{
    int sally[2][3] ={{2,3,4}, {5,4,25}};

    cout<<sally[0][2];
    for (int row =0;row<2;row++){

        for(int column=0;column<3;column++){
            cout<<sally[row][column]<<" ";
        }
        cout<<endl;
    }
}

