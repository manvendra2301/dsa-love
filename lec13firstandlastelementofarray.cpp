#include <iostream>
using namespace std;
int firstOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < mid)
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < mid)
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int arr[6] = {0, 1, 3, 3, 3, 7};
    cout << "first occurence of 3 is on index" << firstOccurance(arr, 6, 3) << endl;
    cout << "last occurence of 3 is on index" << lastOccurance(arr, 6, 3) << endl;
    
    return 0;
}