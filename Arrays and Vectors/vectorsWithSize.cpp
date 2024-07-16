#include <iostream>
#include <vector>
using namespace std;

// vectors function :-- push_back(), pop_back(), size(), capacity(), at, sort()

int main()
{

    vector<int> v(5); // here size and capacity is 5, each element has value 0 by default
    vector<int> v1(5,7); // size is 5 , each element has value 7
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<v1.size()<<" "<<v1.capacity()<<endl;
    cout<<v1[4]<<endl;
    v1.push_back(34);
    cout<<v1.size()<<" "<<v1.capacity()<<endl;
        return 0;
}