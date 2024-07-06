#include <iostream>
using namespace std;
int main ()
{
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        char ch= 'A'+n-row;
       
       while(row>=col) {cout<<ch<<" ";
        ch++;
        col++;}
       cout << endl;
       row++;
    }
    
}