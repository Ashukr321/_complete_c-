// here we see the duplicate elements in the cpp 
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
            cout << arr[i] <<" ";
    }
    
}

int remDup(int arr[],int n){
    // create a new temp array 
    int temp[n];
    temp[0]= arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res-1]!=arr[i])

        {
            temp[res]= arr[i];
            res++;
        }
        
    }
    for (int i = 0; i < res; i++)
    {
        arr[i]= temp[i];
        
    }
    
    return res;
 

}
int main(){
    int arr[] = {10,20 , 30 ,30 ,50 , 60};
    int n = sizeof(arr)/sizeof(int);
    cout<<"before  remove duplicate elements"<<endl;
    printArray(arr,n);
    cout<<endl;

    cout<<"after  remove duplicate elements"<<endl;
     n =  remDup(arr,n);

    printArray(arr,n);
}