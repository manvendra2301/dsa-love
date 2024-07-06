#include <iostream>
using namespace std;
int fibonnaci(int n)
{   
    int fib=0;
    for(int i=0;i<=n;i++)
    {
        fib=fib+i;
        return fib;

    }
}
int main()
{
   cout<< fibonacci(10);
}