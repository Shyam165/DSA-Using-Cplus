// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         map<char, int>mp1;
//         map<char, int>mp2;
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             if(mp1[s[i]] != mp2[t[i]]) return false;
//             mp1[s[i]] = i+1;
//             mp2[t[i]] = i+1;
//         }
//         return true;
//     }
// };