#include<iostream>
using namespace std;

class hero{
    private:
    int health;
    char levels;
    
    public:

    //default constructor
    hero()
    {
        cout<<"constructor is called "<<endl;
    }

    //parameter constructor 
    hero(int helath, char levels){
        this->health=health;
        this->levels=levels;
    }

    //

    //setter

    void sethealth(int n)
    {
        health=n;
    }
    void setlevels(char s)
    {
        levels=s;
    }
    //getter
    int gethealth()
    {
        return health;
    }
    char getlevels()
    {
        return levels;
    }

};

int main()
{
   //object created statically
   hero ramesh;

  