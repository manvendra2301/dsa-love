#include <iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;

        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,-5,-7,6,-1,1,8,0,3,5};
    cout<<"enter the key";
    int key;
    cin>>key;
    int found = search(arr,10,key);
    if (found)
    cout<<"element is present in array";
    else 
    cout<<"element is not present in array";
}
