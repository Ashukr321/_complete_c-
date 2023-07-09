// here we see the max till ith position 

#include<iostream>

using namespace std;

int main(){
    int mx = -1999999;
    int n ; 
    cin>>n;
    // create the array of size n;

    int a[n];
    // the all the element till nthe length 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx,a[i]);
        cout<<mx<<endl;
    }

    return 0;
}