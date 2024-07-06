#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (row >= col)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}