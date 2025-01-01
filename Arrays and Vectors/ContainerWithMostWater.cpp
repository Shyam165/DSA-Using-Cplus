// always update pointer with less water height to get more area as compared with previous one


// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int i = 0;
//         int j = height.size() - 1;
//         int MaxWater = 0;
//         while(i<j){
//             int w = j - i;
//             int h = min(height[i], height[j]);
//             int currWater = w * h;
//             MaxWater = max(currWater, MaxWater);
//             height[i] < height[j] ? i++ : j--;
//         }
//         return MaxWater;
//     }
// };