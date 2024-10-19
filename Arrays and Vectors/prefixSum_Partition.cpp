#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,5,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }

    int idx = -1;

    // We check from 0 to n-2 to avoid out-of-bounds access
    for(int i=0;i<n-1;i++){
        // The condition should be checked against the total sum arr[n-1]
        if(2*arr[i]==arr[n-1]){
            idx = i;
            break;
        }
    }

    if(idx!=-1) {
        cout<<"Yes, it can be partitioned after index "<<idx<<endl;
    }
    else {
        cout<<"Cannot be partitioned"<<endl;
    }
    return 0;
}
