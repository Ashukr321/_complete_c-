// array
#include <iostream>
using namespace std;
int insertAtPos(int arr[], int n, int pos, int data);
void printArrayint(int arr[], int n);
int linearSearch(int arr[],int n,int  key);
int main()
{
    int arr[5] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int pos = 5;
    int data = 34;
    int key = data;
    n = insertAtPos(arr, n, pos, data);
    printArrayint(arr, n);
    int index = linearSearch(arr,n ,key);
    cout<<endl;
    cout << index ;
    return 0;
}
int insertAtPos(int arr[], int n, int pos, int data)
{
    // check for full case
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
        // shift all the elements of the array by 1 unit
    }
    arr[idx] = data;

    return (n + 1);
}


void printArrayint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int linearSearch(int arr[],int n,int key){
    for (int i = 0; i < n;i++)
    {
        if (arr[i]==key) 
        {
            return i;
        }
        
    }
    return -1;
}