#include <iostream>
#include <string>

using namespace std;

class Buckysclass{
    public:
        Buckysclass(string z){
        setName(z);

        }

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
    Buckysclass bo("Bucky bucky roberts");
    cout<<bo.getName();
    return 0;
}
