#include <iostream>

using namespace std;

int main()
{
        char c;
        cout << "Enter number: " << endl;
        int counter =0;
        int x[counter];
        int j=2;

    while(j>1)
    {
       cin>>c;

        if (c=='e')
            {
                for (int y=0; y<counter; y++)
                {
                    cout<<x[y]<<endl;
                }
                break;
            } else
            {
                x[counter] = c - '0';
                counter++;
            }

    }
    return 0;
}
