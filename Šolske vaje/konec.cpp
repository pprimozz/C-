#include <iostream>
using namespace std;
class Prvi {
public:
Prvi() { cout << "1\n"; }
~Prvi() { cout << "8\n"; }
};
class Drugi : public Prvi {
public:
Drugi() { cout << "2\n"; }
~Drugi() { cout << "7\n"; }
};
class Tretji : public Drugi {
public:
Tretji() { cout << "3\n"; }
~Tretji() { cout << "6\n"; }
};
int main()
{ Tretji tretji; Drugi drugi;
{Prvi prvii;}
for (int i=1;i>=0;i--)
Drugi drugii;
system ("pause");
return 0;
}
