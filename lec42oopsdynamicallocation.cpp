#include <iostream>
using namespace std;

class hero
{
private:
    int health;
    string levels;

public:
    // getter
    int gethealth() 
    {
        return health;
    }

    string getlevels()
    {
        return levels;
    }

    // setter

    void sethealth(int n)
    {
        health = n;
    }

    void setlevels(string s)
    {
        levels = s;
    }
};
int main()
{
    // creating object
    hero a;
    a.sethealth(10);
    a.setlevels("A");

    cout << "health is:" << a.gethealth() << endl;
    cout << "levels is:" << a.getlevels() << endl
         << endl
         << endl;

    // dynamic allocation
    hero *b = new hero;

    (*b).sethealth(23);
    (*b).setlevels("S");

    cout << "health is:" << (*b).gethealth() << endl;
    cout << "levels is:" << (*b).getlevels() << endl;
}