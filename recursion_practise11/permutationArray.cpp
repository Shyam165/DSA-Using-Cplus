// class Solution {
// public:

//     void permute(vector<int> nums, int st, vector<vector<int>> &final){
//         if(st == nums.size()){
//             final.push_back(nums);
//             return;
//         }
//         for(int i=st;i<nums.size();i++){
//             if(i != st && nums[i] == nums[st]) continue;
//             swap(nums[st], nums[i]);
//             permute(nums, st + 1, final);
//             // swap(nums[st], nums[i]);   //if elements are distinct then we will use here
//         }
//     }

//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>>final;
//         permute(nums, 0, final);
//         return final;
//     }
// };