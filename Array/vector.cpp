// here we see the vector
// this is store the data in to the contigous memory allocation
// this is  dynamic array in the cpp

// see the example
#include <iostream>
#include <vector>
#include<numeric>
using namespace std;

int main()
{
    // create the vector array
    // vector<int> v;

    // push

    // v.push_back(344);
    // v.push_back(5);
    // v.push_back(4);
    // v.push_back(8);

    // for each methods that traverse the all the elements of the vector
    // for (int x: v)
    // {
    //    cout<<x<<" ";
    // }

    // 6 pop_back()
    // v.pop_back();
    // v.pop_back();

    // 2 size
    // cout << v.size() << endl;

    // 3 size
    // cout << v.capacity() << endl;

    // 4 empty
    // cout << v.empty() << endl;

    // 0 for false
    // 1 for the true

    // 5 front () this gives the front elements of the vector array

    // cout << v.front() << endl;

    // copy method of the array
    // create a new vector v2
    // vector <int > v2 (v.begin(),v.end());
    // for (int x:v2)
    // {
    //     cout<< x <<" ";
    // }

    // vector<int> v(10);
    // int value = 34;
    // Initializing all el emets with a particular value :
    // here we used the fill method to  fill the all the vector element 

    // fill(v.begin(), v.end(), value);

    // for each loop in the cpp 
    // this is similar to the java loop 
    
    // for (int c : v)
    // {
    //     cout << c << " ";
    // }


    // intialize an array with consecutive numbers using std:iota 

    // create the vector 
    vector<int> v(5);
    iota(v.begin(),v.end(),1);

    for (int i :v)
    {
        cout<<i<<" ";
    }
    
    

    return 0;
}