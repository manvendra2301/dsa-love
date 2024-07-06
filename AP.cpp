#include<iostream>
using namespace std;
int Ap(int n)
{
    int ap;
    ap=3*n+7;
    return ap;
}
int main()
{
    int a;
    cin>>a;
    cout<<Ap(a);
    return 0;
}