#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for sort function
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(34);
    v.push_back(45);
    v.push_back(22);
    v.push_back(23);

    v.at(2) = 33; // v[2]=33;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;
    sort(v.begin(), v.end());

    cout << "after sorting the vector elements\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
