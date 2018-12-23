#include <iostream>
using namespace std;

class Enemy{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
        attackPower = a;
        }
};

class Ninja: public Enemy{
    public:
        void attack(){
        cout<<"i am ninja, ninja chop "<<attackPower <<endl;
        }
};

class Monster: public Enemy{
    public:
        void attack()
        {cout<<"moster must eat you!! "<<attackPower <<endl;}
};

int main()
{
    Ninja n;
    Monster m;

    n.setAttackPower(58);
    m.setAttackPower(99);
    n.attack();
    m.attack();

}
