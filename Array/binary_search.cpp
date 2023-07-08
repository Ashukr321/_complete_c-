// here we see the binary search in the cpp
#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            return binarySearch(arr, mid + 1, high, x);
        else
            return binarySearch(arr, low, mid - 1, x);
    }

    return -1;
}

int main()
{
    // create the array
    int arr[] = {1,2,3,4,5,6,7,8,40};
    int n = sizeof(arr) / sizeof(int);

    int x = 3;
    int l = 0;
    int h = n - 1;
    /* Binary Search Algorithm */
    int index = binarySearch(arr, l, h, x);
        cout << index << endl;
   
    return 0;
}
// The condition for the binary search is that the array must be sorted. This is because the binary search algorithm works by repeatedly dividing the array in half until the target element is found. If the array is not sorted, then the binary search algorithm will not work correctly.