#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int space = n - row;
        while(space){
            

            cout<< " ";
        space--;}
        int col = 1;
        while (col <= row)
        {
        cout << "*";
        col++;
        }
        int star=row-1;
        while(star)
        {
            cout<<"*";
            star--;

        }
        cout<<endl;
        row++;
    }
    
   
}