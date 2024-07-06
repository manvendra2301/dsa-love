#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter nos";
    cin >> n;
    for (int p = 2; p <= n; p += 2)
        cout << p << endl;
    return 0;
}