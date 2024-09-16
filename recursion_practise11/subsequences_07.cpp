// print all the subsequences of lenght k from the first n natural numbers
// subsets we already know
// subarray =>continuous parts of array
// sequence=>take it or leave it random order in single direction ex 135 but not 153.
// for subsequence of 3 we have ___ first can have 3(1,2,3) places second can have 3(2,3,4) numbers and last can have 3(3,4,5) numbers from [1,2,3,4,5]
#include <iostream>
#include <vector>
using namespace std;
void subset(vector<int> v, int index, vector<int> k)
{
    if (index == v.size())
    {
        if (k.size() == 3) // to remove greater than 3 size subsequences
            for (int i = 0; i < k.size(); i++)
            {
                cout << k[i];
            }

        cout << endl;
        return;
    }
    if ((k.size() + (v.size() - index) < 3) && (k.size() + (v.size() - index) > 3))
        return; // to decrease complexity not run for size less than 3
    subset(v, index + 1, k);
    k.push_back(v[index]);
    subset(v, index + 1, k);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> k;
    int index = 0;

    subset(v, index, k);
}