#include <iostream>
  using namespace std;
class A {
public:
  A() { cout << "1\n"; }
  ~A() { cout << "2\n"; }
};
class B {
public:
  B() { cout << "5\n"; }
  ~B() { cout << "6\n"; }
};
class C : public B , public A {
public:
  C() { cout << "3\n"; }
  ~C() { cout << "4\n"; }
};
class D : public A , public B {
public:
  D() { cout << "9\n"; }
  ~D() { cout << "8\n"; }
};
  int main()
  { A oa; {B ob;}
for (int i=-1;i<1;i++) A oaa;
      C oc; D od;
      system("pause");
      return 0;
}
