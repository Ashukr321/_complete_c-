// insertion_sort.cpp
#include <iostream>
using namespace std;

// printArray
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

// insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)

    {
        int key =arr[i];
        int j = i-1; 
        while (j>=0&& arr[j]>key)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]= key;
    }
}
int main()
{
    // create the array
    int arr[] = {
        2,
        4,
        3,
        3,
        2,
        4,
        56,
        64,
        32,
    };


    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
// time complexity o(n^2);

