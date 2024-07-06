#include <iostream>
using namespace std;
//0->not a prime no;
//1-> is a prime no
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    cout<<"its a prime no";
    else
    cout<<"not a prime no";
    return 0;
}