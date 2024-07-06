// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, row = 1;
//     cin >> n;
//     while (row <= n)
//     {
//         int col = 1;
//         int value = row;
//         while (row >= col)
//         {
//             cout << value<<" ";
//             value++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int value = row;
        for (int col = 1; col <= n; col++)
        {
            if(row>=col)
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    return 0;
}