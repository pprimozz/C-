#include <iostream>

using namespace std;

int printSomething(int x, int y);


int main()
{
   cout<<printSomething(43,56);

    return 0;

}
int printSomething(int x, int y){
    int answer = x+y;
    return answer;
}
