// class Solution {
// public:
//     string reverseVowels(string s) {
//          int i = 0;
//         int j = s.size() - 1;
//         string vowels = "aeiouAEIOU";
        
//         while (i < j) {
//             if (vowels.find(s[i]) != string::npos && vowels.find(s[j]) != string::npos) {
//                 swap(s[i], s[j]);
//                 i++;
//                 j--;
//             } 
//             else if (vowels.find(s[i]) == string::npos) {
//                 i++;
//             } 
//             else if (vowels.find(s[j]) == string::npos) {
//                 j--;
//             }
//         }
//         return s;
//     }
// };