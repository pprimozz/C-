#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
     int n;
    cout <<"Vnesito stevilo n: "<<endl;
    cin >>n;
    int polje[n];
    int x;

int j=0;
    for (int i=0; i<n; i++){
        cout << "Vnesi stevilo: "<<endl;
        cin >>x;
        polje[i] = x;
        if (x%2==0){j+=1;}

    }

    int polje2[j];
    int c=0;

    for(int x=0; x<n; x++){

        if(polje[x] %2== 0){
            if (polje[x] < 0){
                polje2[c] = abs(polje[x]);
            } else{

            polje2[c] = polje[x];
             }
        c+=1;
        }

    }

cout << endl<< endl;
cout <<"Polje1: "<<endl;
        for (int y=0;y<n; y++){
        if(y!=n-1){
        cout << polje[y]<<", ";
        }else {
            cout << polje[y]<<endl;
        }
    }

cout << endl<< endl;
cout <<"polje 2: "<<endl;

    for (int z=0;z<j; z++){
        if(z!=j-1){
        cout << polje2[z]<<", ";
        }else {
            cout << polje2[z]<<endl;
        }

    }
}

