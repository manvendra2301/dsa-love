#include <iostream>
using namespace std;
int Binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int odd[5] = {2, 4, 7, 10, 12};
    int even[4] = {0, 2, 7, 8};

    cout << "index of element 10 is" << Binarysearch(odd, 5, 10) << endl;

    cout << "index of element 7 is" << Binarysearch(even, 4, 7);
    return 0;
}