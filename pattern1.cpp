#include <iostream>
using namespace std;
int main()
{
    int n, count = 1, i = 1;

    cin >> n;

    while (i <= n)

    {
        int j = 1;
        while (j <= n)
        {
            cout << count<<" ";
            j++;
        }
        cout << endl;
        i++;
        count++;
    }
    return 0;
}
