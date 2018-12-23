#include <iostream>
#include <string>

using namespace std;

class Buckysclass{
    public:
        void setName(string x){
        name = x;
        }
        string getName(){
        return name;
        }

    private:
    string name;

};

int main()
{
    Buckysclass bu;
    bu.setName("Sir bucky");
    cout<<bu.getName()<<endl;
    return 0;
}
