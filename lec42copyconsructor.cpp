#include<iostream>
using namespace std;

class hero{
    public:
    //properties
    int health;
    char levels;

    //parametric constructor
    hero(int health,char levels)
    {
        this->health=health;
        this-> levels=levels;
    }

    //copy constructor

    hero(hero& temp)
    {
        cout<<"copy constructor is called"<<endl;
        this->health=temp.health;
        this->levels=temp.levels;
    }
    void print()
    {
        cout<<"health:"<<this->health<<endl;
        cout<<"levels:"<<this->levels<<endl;
    }
};
int main()
{
    //creating object
    hero ramesh(10,'A');
    ramesh.print();

    hero suresh(ramesh);
    suresh.print();

}