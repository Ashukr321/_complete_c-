//  left rotaion of array by k
// solution methods 1 



#include<iostream>
using namespace std;
// print array 
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    
}

void rotateLeftbyOne(int arr[],int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp; 
}
// left roation by k position 
void leftRotateByd(int arr[],int n,int d){
    for (int i = 0; i < d; i++)
    {
        // here we call the fuction leftrotaion by 1 
        rotateLeftbyOne(arr,n);
    }
    
}

void leftRotaionKPosition (int arr[],int n){

}
int main(){
    // create a array 
     int arr[]= {23,4,5,5,7,3,32,44,};
     int n = sizeof(arr)/sizeof(int);
    int d = 4;
    printArray(arr,n);
    cout<<endl;
    leftRotateByd(arr,n,d);
    printArray(arr,n);
    return 0;
}