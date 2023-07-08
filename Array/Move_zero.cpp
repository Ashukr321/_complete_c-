// here we see the move all element in the end of the array 
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

// create the function that move all  the zero elements in the end of the array 
void moveZeroEnd(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
           for (int j = i+1; j < n; j++)
           {
             if (arr[j]!=0)
             {
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
             }
             
           }
           
        }
        
    }
    
}
int main(){

    // create the array 
    int arr[]= {190, 20 , 30  ,0, 0 , 40 };
    int n = sizeof(int )/sizeof(int);
    // print array 
    cout<<"before move zero to end "<<endl;

    printArray(arr,n);
    cout<<endl;
    cout<<"after move zero to end "<<endl;
    moveZeroEnd(arr,n);
    printArray(arr,n);
    return 0;
}