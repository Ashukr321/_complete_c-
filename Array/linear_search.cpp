// here we see the linear search in the cpp 
#include<iostream>

using namespace  std;

// linear search 
 int linearSearch(int arr[],int n, int key ){
    for (int i = 0 ;i <n ; ++i){
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
 }
int main(){
    // create  the array 
     int arr[]= {3,4,3,40,5,6};
     int n = sizeof(arr)/sizeof(int);
     int key= 40;
    int index  = linearSearch(arr,n,key);
    cout<<index<<endl;
    return 0;
}