#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int remDup(int arr[],int n){
    int res = 1; 
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!= arr[res-1])
        {
           arr[res]= arr[i];
           res++;
        }
        
    }
    return res;
    
}
int main(){
    // create a rrray 
    int arr[]= {10,20,20, 30 , 30 , 50 ,60 , 60};
    int n = sizeof(arr)/sizeof(int);
    // print array 
    cout<<"before removing duplicatre"<<endl;
    printArray(arr,n);
    cout<<endl;
   n=  remDup(arr,n);
    cout<<"after removing duplicatrWe"<<endl;
    printArray(arr,n);
    return 0;
}