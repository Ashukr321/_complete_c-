// here we see the list in the cpp
#include <iostream>
#include <list>
using namespace std;

int main()
{
    /*

     list are sequence containers that allow non - contigous memory allocation
     as compare to vector list is slow

    */

    // create the list
    list<int> l;

    l.push_back(34);
    l.push_back(4);
    l.push_back(3);
    l.push_back(0);
    l.push_back(2);

    // for (int x : l)
    // {
    //     cout << x <<" ";
    // }
    cout<<endl;

    // 2 front 
    cout<<l.front()<<endl;
    // 3 back 
    cout<<l.back()<<endl;

    // 4 pushfront 
    l.push_front(3);
    //  for (int x : l)
    // {
    //     cout << x <<" ";
    // }



    // pop front 5 
    l.pop_front();
    // for (int c:l)
    // {
    //     cout<< c<< " ";
    // }
    

    // insert element at specific positon 


    return 0;
}