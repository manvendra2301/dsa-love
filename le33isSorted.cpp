#include <iostream>
using namespace std;

bool isSorted(int arr[],int size )
{
    //base case 
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;

    bool remainingarray = isSorted(arr+1,size-1);
    return remainingarray;
}

int main()
{
    int arr[6]={2,4,5,7,9,8};
    int size =6;
    
    if(isSorted(arr,6))
    {
        cout<<"array is sorted ";
    }
    else 
    {
        cout<<"array is not sorted ";
    }
}