#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int maxsum=INT32_MIN;
    int curr;
    for(int st=0;st<5;st++){
        curr=0;
        for(int end=st;end<5;end++){
          curr+=arr[end];
          maxsum= max(curr, maxsum);
        }
    }
    cout<<"the maximum sum of subarray is "<<maxsum<<endl;
    return 0;
}