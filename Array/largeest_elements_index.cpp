// largeset elements index of the array elements 

#include<iostream>
using namespace std;

// main methods 

int getLargeestEleIdx(int arr[],int n);
int main(){

    //create the array 
    int arr[]= {4,5,6,7,4,544,4,5,5,56,6,6,66,77,1000};
    int n = sizeof(arr)/sizeof(int);
    int idx  = getLargeestEleIdx(arr,n);
    cout <<arr[idx]<<" ->  index : "<<idx<< endl;
    
    return 0;
}

int getLargeestEleIdx(int arr[],int n){
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // declare a bool variables  flag 
        bool flag = true;
        
        // inner loop 
        for (int j = 0; j < n; j++)
        {
           if (arr[j]>arr[i])
           {
            flag = false;
            break;
           }
           
        }

        if (flag ==true)
        {
            return i;
        }
        
        
    }
    
    return -1;
}
