#include <iostream>
using namespace std;

class A {
      public:
      A() { cout << "\n1\n"; }
      ~A() { cout << '2'; }
      };
class B : public A {
      public:
      B() { cout << "\n3\n"; }
      ~B() { cout << "4\n"; }
      };
class C : public B {
      public:
      C() { cout << "\n5"; }
      ~C() { }
      };


int main()
{
for (int i=3;i<5;i++)
{cout << i; A o_a;}
B o_b;
B * k_b = &o_b;
cout << '1'; {C o_c;} cout << '2';
B * k_bb = new B;
cout << '3'; delete k_bb;

system("pause");
return 0;
}
