#include <iostream>
using namespace std;

int volume(int i=1, int w=1, int h=1);

int main()
{
    cout<<volume(5,6);
    return 0;
}
int volume(int i, int w, int h){
    return i*w*h;
}
