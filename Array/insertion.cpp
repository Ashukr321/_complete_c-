// insertion sort
#include <iostream>

using namespace std;
void insertionSort(int arr[], int n)
{
    // outer loop
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4,4,54,53};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr,n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}