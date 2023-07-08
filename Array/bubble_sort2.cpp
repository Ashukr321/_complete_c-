// here we see the bubble sort
#include <iostream>
using namespace std;

// print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// buble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])

            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    // create the array
    int arr[] = {3, 2, 2, 3, 5, 7, 81};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

// worst case time complexity => o(n^2);
// best case time comlexity => o(n);
