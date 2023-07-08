// here we see the left rotaion in the cpp 
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    
}

// left roation 
void leftRotaion(int arr[],int n){
    int temp = arr[0];
    for (int i = i+1; i< n; i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1]= temp;
}
int main(){
    int arr []= {4,5,3,32,3,34};
    int n = sizeof(arr)/sizeof(int);
    leftRotaion(arr,n);
    printArray(arr,n);
    return 0;   
}