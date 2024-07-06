#include <iostream>
using namespace std;

class hero
{
public:
    int health;
    int levels;
};

int main()
{
    // creation of object
    hero ramesh;
    ramesh.health = 70;
    ramesh.levels = 2;
    cout << "health is " << ramesh.health << endl;
    cout << "levels is " << ramesh.levels;
}