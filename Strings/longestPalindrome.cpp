// class Solution {
// public:
//     int longestPalindrome(string s) {
//         int ans=0;
//         map<char, int>mp;
//         for(auto i:s){
//             mp[i]++;
//         }
//         for(auto i:mp){
//             if(i.second % 2 == 0){
//                 ans+=i.second;
//             }
//             else{
//                 ans+=i.second-1;
//             }
//         }
//         if(ans % 2 == 0 && ans<s.size()) ans+=1;
//         return ans;
//     }
// };