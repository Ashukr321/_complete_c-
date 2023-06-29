#include <iostream>
using namespace std;

int print(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cout << arr[i] << " ";
    }
    return sum;
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// swap two number
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// bubble sort created

void bubbleSort(int arr[], int n)
{
    // outer loop
    for (int i = 0; i < n - 1; i++)
    {
        // inner loop
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// time complexity is o(n^2);

// main methods start ...
int main()
{
    // create the array
    int arr[5] = {4, 5, 6, 26, 34};
    int n = sizeof(arr) / sizeof(int);
    int key = 26;
    bubbleSort(arr, n);
    int result = print(arr, n);
    cout << endl;
    cout << result << endl;
    int index = linearSearch(arr, n, key);
    cout << index << endl;
    return 0;
}