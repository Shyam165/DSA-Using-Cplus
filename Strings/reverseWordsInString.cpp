#include <iostream>
#include <string>
using namespace std;
string reverseStr(string str){
    string rev = "";
    int len = str.size();
    int r=0;
    for(int i=len-1;i>=0;i--){
        if(str[i] == ' '){
        r=len-i;  //find pos where str has to printed
        len=i-1; //we do not want space or dot
        rev.append(str.substr(i+1, r));
        if(i>0){
             rev+=' ';
             }
        }
    }
    rev.append(str.substr(0, len+1));
    return rev;
}

int main() {
    string str = "Hello welcome to the world of programming!";
    string rev = reverseStr(str);
    cout<<rev<<endl;
    return 0;
}
