#include <iostream>
using namespace std;
class razred {
int i;
int j;
public:
razred(int, int);
void daj_razred();
} ;
razred:: razred(int x, int y);
{ i = x; j = y;}
void Razred::daj_razred(
{ cout << i << " " << j << "\n"; }
int main()
{
Razred e(10, 20.5);
e:daj_razred();
return 0;
}
