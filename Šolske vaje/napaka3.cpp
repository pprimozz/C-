#include <iostream>
using namespace std;
class Razred {
int i;
int j;
public:
Razred(int, int);
void daj_razred();
} ;
Razred,:Razred(int x, int y)
{ i = x; j = y;}
Razred::daj_razred()
{ cout << i << " " << j << "\n" }
int main()
{
razred e(10, 20), f(0, 0);
e.daj_razred();
f.daj_razred();
return 0;
}
