#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        char value = 'A' + row - 1;
        while (row >= col)
        {
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;  
        row++;
    }
}