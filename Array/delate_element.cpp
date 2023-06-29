// delate elements from array
#include <iostream>
using namespace std;
void printArray(int arr[], int n);

int delateArray(int arr[],int n ,int data);
int main()
{

    // create the array
    int arr[] = {23, 5, 6, 77, 8};
    int n = sizeof(arr) / sizeof(int);
    int data = 5;
    cout<<"before delate "<<endl;
    printArray(arr, n);
    cout<<endl;

    cout<<"after delate "<<endl;

    n = delateArray(arr,n,data);
    printArray(arr, n);
    
    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
}



int delateArray(int arr[],int n ,int data){
    int i ; 
    for ( i = 0; i < n; i++)

    {
        if (arr[i]==data)
        {
            break;
        }  
     
        if (i==n)       
        {
           return -1;
        }
    }

    for (int j = i; j < n-1; j++)
    {
       arr[j]= arr[j+1];
    }
    

    return(n-1);
    
}
