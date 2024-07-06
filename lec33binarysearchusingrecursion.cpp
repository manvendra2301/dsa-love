#include <iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int k)
{

    if (s > e)

    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (mid == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[8] = {2, 4, 7, 9, 5, 6, 3, 1};
    int n = 8;

    cout << binarysearch(arr, 0, n - 1, 6);
    return 0;
}
