#include <iostream>
using namespace std;
void countingDigits(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main ()
{
    int n;
    cin>>n;
    countingDigits(n);
    return 0;
}