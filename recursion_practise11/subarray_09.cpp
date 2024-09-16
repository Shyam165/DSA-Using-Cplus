#include <iostream>
#include <vector>
using namespace std;
void subarray(vector<int> arr, vector<int> v, int index) // will work in unique elements only for repeating use loops
{
    if (index == arr.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    subarray(arr, v, index + 1); // no problem in left call only problem in right call so we put conditions on right calls
    if (v.size() == 0 || (v[v.size() - 1] == arr[index - 1]))
    {
        v.push_back(arr[index]);
        subarray(arr, v, index + 1);
        // return; // taki niche ki conditions run na ho sake
    }
    else
        return; // no sense waise bhi return ho hi jayega
}
int main()
{
    vector<int> arr = {1, 2, 3};
    // for (int i = 0; i < arr.size(); i++) // tell the starting
    //     for (int j = i; j < arr.size(); j++)
    //     { // take how much numbers at a time
    //         for (int k = i; k <= j; k++)
    //         {
    //             cout << arr[k];
    //         }
    //         cout << endl;
    //     }
    vector<int> v = {};
    subarray(arr, v, 0);
}