#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int k)
{
    //base case 
    if(size==0)
    return false ;
    if(arr[0]==k)
    return true;
    else{
        bool remainingpart= linearsearch(arr+1,size-1,k);
        return remainingpart;
    }
}

int main ()
{
    int arr[7]={3,7,2,9,6,3,1};
    int size=7;

    if(linearsearch(arr,7,9)){
        cout<<"element is present in array";
    }
    else 
    cout<<"element is not present in array ";
    }