#include<iostream>
using namespace std;

void sayDigits(int n, string arr[])
{
    //base case 
    if(n==0)
    {
        return;
    }
    int digits=n%10;
    n=n/10;

    sayDigits(n,arr);

    cout<<arr[digits]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>> n;
    cout<<endl<<endl;

    sayDigits(n,arr);
}