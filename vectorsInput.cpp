#include <iostream>
#include <vector>
using namespace std;

// vectors function :-- push_back(), pop_back(), size(), capacity(), at, sort()

int main()
{

    vector<int> v(5); // here size and capacity is 5, each element has value 0 by default
    vector<int> v1;

    // if vector size is not declared at the time of declaration
    cout<<"enter the element for v1 vector:\n";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }


    //if vector size is given
    cout<<"enter the element for vector v\n";
     for(int i=0;i<5;i++){
    cin>>v[i];
    }

        return 0;
}