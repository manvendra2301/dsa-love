#include <iostream>
using namespace std;

int getsum(int arr[],int size )
{
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];

    int remainingpart= getsum(arr+1,size-1);
    int sum =arr[0]+remainingpart;
    return sum;
}

int main(){
    int arr[5]={2,4,6,8,5};
    int size=5;
    
    cout<<"sum is "<<getsum(arr,5);
}