#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector; // initilizes an empty vector.
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint);
  } while (myint);

  cout << "myvector stores " << (int) myvector.size()-1 << " numbers.\n";

  return 0;
}
