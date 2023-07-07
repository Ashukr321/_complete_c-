// here we see the how to reverse  the array 
#include<iostream>

using namespace std;

// print array 
void print(int arr [] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
}

// reverse array 
void revArray(int *arr, int start, int end){
    while (start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
    
}
int main(){

    // create the array 
    int arr[]= {2,4,5,646};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
     int end = n-1;
    print(arr,n);
    cout<<endl;
    revArray(arr,start,end);
    print(arr,n);
    return 0 ;
}