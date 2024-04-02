#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for sort function
using namespace std;

// this below func does not change the actual vector element
// void change(vector <int> a){
//     a[0]=100;
// }


// this below func change the value of element as it is pass by reference
void change(vector <int> &a){
    a[0]=100;
}

int main()
{
    vector<int> v;
    v.push_back(34);
    v.push_back(45);
    v.push_back(22);
    v.push_back(23);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;
    change(v);
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
