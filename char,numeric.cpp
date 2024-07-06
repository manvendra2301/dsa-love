#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "letters are uppercase";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "letters are lowercase";
    }
    else if (a >= '0' && a <= '9')
        cout << "numeric digits";
    return 0;
}