#include <iostream>
#include <map>

using namespace std;

int main() {
    string str = "abcdefeafgdf";
    map<char, int>mp;

    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    
    for(auto i:mp){
        if(i.second > 1){
            cout<<i.first<<" ";
        }
    }

    return 0;
}
