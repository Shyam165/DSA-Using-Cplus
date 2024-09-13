// class Solution {
// public:
//     bool isPalindrome(string s) {
       
       
//       string filterstr="";
//       for(char c: s){
//         if(isalnum(c)){
//             filterstr+=tolower(c);
//         }
//       }
//      int l=0;
//       int r=filterstr.size()-1;
//       while(l<r){
//         if(filterstr[l]!=filterstr[r]){
//            return false;
//         }
//         l++;
//         r--;
//       }
//       return true;
//     }
// }