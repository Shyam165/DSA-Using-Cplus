// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int start = 0;
//         int maxlen = 1;
//         for(int i=1;i<s.size();i++){
//             //for even case
//             int l=i-1;
//             int r=i;
//             while(l>=0 && r<s.size() && s[l] == s[r]){
//                 if((r-l+1) > maxlen){
//                     maxlen=r-l+1;
//                    start = l;
//                 }
//                  l-=1;
//                  r+=1;
//             }
//             //for odd case
//             l=i-1;
//             r=i+1;
//              while(l>=0 && r<s.size() && s[l] == s[r]){
//                 if((r-l+1) > maxlen){
//                     maxlen=r-l+1;
//                     start=l;
//                 }
//                 l-=1;
//                 r+=1;
//         }
//     }
//          return s.substr(start,maxlen);
//     }
// };