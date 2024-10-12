#include<iostream>

using namespace std;

int main(){
    int decNum = 42;
    int ans = 0;
    int rem=0;
    int pow=1;  //10^0  10^1 10^2 .....

    while(decNum>0){
        rem=decNum%2;
        decNum/=2;
        ans+=rem*pow;
        pow*=10;
    }
    cout<<ans;
}