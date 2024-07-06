#include <iostream>
using namespace std;

int sumofdigits(int n){
for (int i = 0; i < n; i++)
{
    int sum = 0;
    while (i != 0)
    {
        int digit = i % 10;
        sum = sum + digit + n;
        n = n / 10;
    }
    if (sum == n)
    {
        return {i};
    }
}
}

int main()
{
    int n;
    cin>>n;
}