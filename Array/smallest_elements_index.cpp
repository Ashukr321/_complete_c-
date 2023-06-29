// smallest elements index from the array

#include <iostream>
using namespace std;

int getSmllestIdx(int arr[], int n);
// main methods
int main()
{
    // create the array
    int arr[] = {
        5,
        6,
        6,
        1,
        31,
        8,
        6,
        4,
        3,
    };
    // size of the array
    int n = sizeof(arr) / sizeof(int);
    int idx = getSmllestIdx(arr, n);
    cout << arr[idx] << " index -> " << idx << endl;
    return 0;
}

int getSmllestIdx(int arr[], int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // create a bool variables
        bool flag = true;
        // inner loop
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)

        {
            return i;
        }
    }
    return -1;
}
