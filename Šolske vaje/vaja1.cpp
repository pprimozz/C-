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
    

cout <<A ;


system("pause");
return 0;

}
