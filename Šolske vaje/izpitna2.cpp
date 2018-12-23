#include <iostream>
using namespace std;
class Prvi {
public:
Prvi() { cout << "1\n"; }
~Prvi() { cout << "0\n"; }
};
class Drugi : public Prvi {
public:
Drugi() { cout << "2\n"; }
~Drugi() { cout << "9\n"; }
};
class Tretji : public Prvi {
public:
Tretji() { cout << "3\n"; }
~Tretji() { cout << "8\n"; }
};
int main()
{ Prvi prvi; Drugi drugi; Tretji tretji;
for (int i=1;i>=-1;i--) {Prvi prvii;}
{Tretji tretjii;}

return 0;
}
