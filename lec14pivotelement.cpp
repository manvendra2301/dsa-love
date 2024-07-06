#include<iostream>
using namespace std;
int pivotelement(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int even[9]={8,9,17,1,2,3,4,5,6};
    cout<<"pivot element index is"<<pivotelement(even,9);
    return 0;
}