// here we see the selection sort in the array
#include <iostream>

using namespace std;
// print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// selection sort
void selectionSort(int arr[], int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(&arr[i], &arr[minIdx]);
    }
}
int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    printArray(arr, n);
}