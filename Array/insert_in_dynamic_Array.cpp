// dynamic array  => vector

#include<iostream>

// include the  iterator 
#include<iterator>

// import the vector 
#include <vector>

using namespace std; 
void printArray(vector<int> v);
int main(){

    // create  vector 
    vector <int> v;
    //create the ptr iterator 
    vector<int>::iterator ptr;

    cout<<v.size()<<endl;
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    // printArray(v);

    for (ptr  = v.begin();  ptr<v.end();ptr++)
    {
       cout<<*ptr<<" ";
    }
    

    return 0; 
}
void printArray(vector <int>v){
    for (int i :v)
    {
      cout<<i<<" ";
    }
    
}