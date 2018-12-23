#include <iostream>
using namespace std;

class A {
public:
A() { cout << "a\n"; }
~A() { cout << "1\n"; }
};

class B {
public:
B() { cout << "b\n"; }
~B() { cout << "2\n"; }
};

class D : public B , public A {
public:
D() { cout << "c\n"; }
~D() { cout << "3\n"; }
};

class C : public A , public B {
public:
C() { cout << "d\n"; }
~C() { cout << "4\n"; }
};

int main()
{ B b;
for (int i=3;i<=4;i++) {A a;}

{
    {
        {D d;}

            C c; }

            A a;

}

}
