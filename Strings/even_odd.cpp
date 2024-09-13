#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "mynameisshyamsingh";
    int even, odd =0;

    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            even=even+(int)(str[i]);
        }
        else {
            odd = odd+(int)(str[i]);
        }
    }

    if(even>odd){
        cout<<even<<" is the sum of even places  ascii values of all characters in the given string";
    }
    else{
        cout<<odd<<" is the sum of odd places  ascii values of all characters in the given string";
    }

}