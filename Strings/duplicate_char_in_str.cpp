#include <iostream>
#include <map>

using namespace std;

// int main() {
//     string str = "abcdefeafgdf";
//     map<char, int>mp;

//     for(int i=0;i<str.length();i++){
//         mp[str[i]]++;
//     }
    
//     for(auto i:mp){
//         if(i.second > 1){
//             cout<<i.first<<" ";
//         }
//     }

//     return 0;
// }



int main(){
     int arr[]={1,2,3,4,2,5,6,3,3,6,7,8};
     map<int, int>mp;
     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){

        mp[arr[i]]++;
     }

     for(auto i:mp){
        if(i.second > 1){
            cout<<i.first<<" ";
        }
     }

    return 0;
}