// left array rotaion 
#include<iostream>

using namespace std;
// print Array 
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
            cout << arr[i] <<" ";

    }
    
}

void rightRotaion(int arr[],int n){
    int temp = arr[n-1];
    for (int i = n-1; i >=0; i--)
    {
      arr[i+1]= arr[i];
    }
    arr[0]= temp;
    

}
// left rotaion 
int main(){
    int arr[] = {1,2,5,6,7,9};
    int n = sizeof(arr)/sizeof(int);
    rightRotaion(arr,n);
    printArray(arr,n);
}