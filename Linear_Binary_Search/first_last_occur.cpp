// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         return {first(nums, target), last(nums, target)};
//     }

// private:
//     int first(vector<int>& n, int t) {
//         int l = 0;
//         int h = n.size() - 1;
//         int pos = -1;

//         while (l <= h) {
//             int mid = l + (h - l) / 2;
//             if (n[mid] == t) {
//                 pos = mid;
//                 h = mid - 1;  // Continue searching in the left half
//             } else if (n[mid] < t) {
//                 l = mid + 1;
//             } else {
//                 h = mid - 1;
//             }
//         }
//         return pos;
//     }

//     int last(vector<int>& n, int t) {
//         int l = 0;
//         int h = n.size() - 1;
//         int pos = -1;

//         while (l <= h) {
//             int mid = l + (h - l) / 2;
//             if (n[mid] == t) {
//                 pos = mid;
//                 l = mid + 1;  // Continue searching in the right half
//             } else if (n[mid] < t) {
//                 l = mid + 1;
//             } else {
//                 h = mid - 1;
//             }
//         }
//         return pos;
//     }
// };