#include<iostream>

using namespace std;

int main(){
    int binary = 101010;
    int ans=0;
    int pow=1;

    while(binary>0){
        if(binary%2!=0){
            ans+=(binary%2) * pow;
        }
        binary/=10;
        pow*=2;
    }

    cout<<ans;
     
    return 0;
}