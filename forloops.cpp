#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = 1;
    cout << "enter n"<<endl;
    cin >>n ;
   
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "not a prime no" << endl;
    }
    else
    {
        cout << "is a prime no";
    }
   
}