#include <iostream>
#include <vector>
using namespace std;

// vectors function :-- push_back(), pop_back(), size(), capacity(), at, sort()

int main()
{

    vector<int> v; // here it is zero sized dynamic array
    v.push_back(23);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(25);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(22);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(27);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
      v.push_back(23);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(25);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(22);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;
    v.push_back(27);
    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    //note: if we use pop_back then size will be decreased only there is no effect on the capacity

    cout << "size: " << v.size() << " capacity: " << v.capacity()<<endl;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }

    return 0;
}