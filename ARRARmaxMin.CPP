#include <bits/stdc++.h>
using namespace std;
int maxArray(int num[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}

int minArray(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"max element of array is"<<maxArray(num,size);
    cout<<"min element of array is"<<minArray(num,size);
}