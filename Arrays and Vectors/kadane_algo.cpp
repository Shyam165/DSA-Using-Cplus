#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxsum=INT32_MIN;
    int curr=0;


    // for(int st=0;st<5;st++){
    //     curr=0;
    //     for(int end=st;end<5;end++){
    //       curr+=arr[end];
    //       maxsum= max(curr, maxsum);
    //     }
    // }


    //best approach to solve this problem
    for(int i=0;i<7;i++){
        curr+=arr[i];
        maxsum=max(curr, maxsum);
        if(curr<0){
            curr=0;
        }
    }
    cout<<"the maximum sum of subarray is "<<maxsum<<endl;
    return 0;
}