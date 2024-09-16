#include <iostream>
#include <vector>
using namespace std;
void subset(vector<int> v, int index, vector<int> k)
{
    if (index == v.size())
    {
        for (int i = 0; i < k.size(); i++)
        {
            cout << k[i];
        }
        cout << endl;
        return;
    }
    subset(v, index + 1, k);
    k.push_back(v[index]);
    subset(v, index + 1, k);
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> k;
    int index = 0;

    subset(v, index, k);
}

// class Solution {
// public:
//     void helper(vector<int>&nums,vector<int> ans,index,vector<vector<int>>&finalans){//better to mkae a helper function so that agruments according to us
//         if(index==nums.size()){

//             finalans.push_back(ans);
//             return;}

//             helper(nums,ans, index + 1, finalans);
//     ans.push_back(nums[index]);
//    helper(nums,ans, index + 1, finalans);

//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>ans;
//         vector<vector<int>>finalans;
//         helper(nums,ans,0,finalans);
//         return finalans;

//     }
// };