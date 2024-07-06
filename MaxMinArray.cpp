#include <iostream>
using namespace std;
int main ()
{
    int arr[5]={2,5,8,3,9};
    int max= arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}