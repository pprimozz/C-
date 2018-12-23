#include <iostream>
using namespace std;
int main ()
{


int s;

cout <<"Vnesi dolzino stranice:";
cin>>s;

       for (int i=1; i<=s;  i++)
           {
             for (int k=s-i; k>0; k--)
             {   
                cout << " ";
                       
                }
             for (int e=s-i; e<s; e++)
             {
                 cout<<"*";
             }
             
              for (int e=s+1-i; e<s; e++)
             {
                 cout<<"*";
             }

                cout <<"\n";
                
           }
system ("pause");
return 0;
}
