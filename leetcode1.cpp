//for an integer n the difference between prod and sum 
#include <iostream>
using namespace std;
int main()
{
    int n;
    int prod = 1, sum = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int result = prod - sum;
    cout<<result;
    return result;
}