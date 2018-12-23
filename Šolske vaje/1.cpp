#include <iostream>
   using namespace std;
class X {
 public:
   X() { cout << "a\n"; }
   ~X() { cout << "x\n"; }
};
class Y : public X {
  public:
    Y() { cout << "b\n"; }
    ~Y() { cout << "y\n"; }
};
class Z : public X {
 public:
  Z() { cout << "c\n"; }
  ~Z() { cout << "z\n"; }
};
int main()
{ Y o_y;
   Y * k_bb = new Y;
   delete k_bb;
   {X o_a, o_b;}
   {Z o_c; Y o_aa;}
  system("pause");
   return 0;
}
