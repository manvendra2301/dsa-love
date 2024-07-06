#include <iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
        count++;
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

    //pivot element ke right aur left side ke elements ko sort karne ke liye 

    int i=s; 
    int j=e;

    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
      
    }
    return pivotindex;
    
}


void quicksort(int arr[], int s, int e)
{
    //base case 
    if(s>=e)
    return;
    // pivot pointer ko sahi jagah rakhne ke liye 
    int p= partition(arr,s,e);
    
    //left partioned array ko sort karne keliye 
    quicksort(arr,s,p-1);

    //right partioned array ko sort karne ke liye 

    quicksort(arr,p+1,e);
}

int main()
{
    int arr[10]={2,5,7,4,9,7,8,2,6,1};
    int n=10;
    
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}