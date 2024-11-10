#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int>ans;
    int n = nums.size();
    int i=0, j=n-1;

    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
  vector<int>nums = {2,7,11, 15};
  int target = 13;
  vector<int> ans = pairSum(nums, target);
  cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}




    // vector<int> twoSum(vector<int>& nums, int target) {
    //   unordered_map<int, int> numIndexMap;  // Maps number to its index
        
    //     for (int i = 0; i < nums.size(); ++i) {
    //         int complement = target - nums[i];
            
    //         // Check if complement exists in the map
    //         if (numIndexMap.find(complement) != numIndexMap.end()) {
    //             return {numIndexMap[complement], i};
    //         }
            
    //         // Add current number and its index to the map
    //         numIndexMap[nums[i]] = i;
    //     }
        
    //     return {};  // No solution found
    // }