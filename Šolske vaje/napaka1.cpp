#include <iostream>
using namespace std;
class Prav_trikotnik
{
float a, b, pl;
public :
Prav_trikotnik () {a = 1.0; b = 1.0; pl = a*b/2;}
Prav_trikotnik (float x) {a = x; b = 1.0; pl = a*b/2;}
Prav_trikotnik (float x, float y){a = x;b = y;pl = a*b/2;}
~Prav_trikotnik () {}
void izpis ();
}
void Prav_trikotnik:izpis()
{ cout << "Trikotnik: "<<a<<" in "<<b<<" p= "<<pl<<endl;}
int main ()
{
Prav_trikotnik moj_trik_a, moj_trik_b(3), moj_trik_c(6,5);
moj_trik_a->izpis();
return 0;
}
