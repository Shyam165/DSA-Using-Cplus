// array of elements given we need to take elements that sum to a target
// ex=>[2,3,5] target=>8   (2,2,2,2) ,(3,5)     and 3,5 is equal to 5,3  so only of them should be there in combination.
#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int> s, vector<int> v, int target, int index)
{
    if (target == 0)
    {
        for (int i = 0; i < s.size(); i++)
            cout << s[i] << " ";
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = index; i < v.size(); i++)
    { // loop so that for every element recursion applied and to check that only time we used index as i;
        s.push_back(v[i]);
        combination(s, v, target - v[i], i);
        s.pop_back(); // so that previoius element not considered in  next recursion
    }
}
int main()
{
    vector<int> v = {2, 3, 5};
    vector<int> s;
    int target = 8;
    combination(s, v, target, 0);
}