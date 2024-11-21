//-------------------------leetcode  290------------------------

// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
//        map<char, int>p;
//        map<string, int>ss;
//        vector<string>v;
//        string temp = "";
//        for(int i=0;i<s.size();i++){
//         if(s[i] == ' '){
//            v.push_back(temp);
//            temp="";
//         }
//         else{
//             temp +=s[i];
//         }
//        }
//        v.push_back(temp);
//        if(v.size() != pattern.size()) return false;
//        for(int i=0;i<pattern.size();i++){
//         if(p[pattern[i]] != ss[v[i]]) return false;
//         p[pattern[i]]=i+1;
//         ss[v[i]]=i+1;
//        } 
//        return true;
//     }
// };