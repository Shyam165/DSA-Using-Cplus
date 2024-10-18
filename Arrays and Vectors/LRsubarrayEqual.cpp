#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total = 0;
    int lsum = 0;
    for(int i = 0;i<n;i++){
        total +=arr[i];
    }

    int i=0;
    int j=n-1;
    while(i<=j){
        lsum +=arr[i];
        total -=arr[j];
        if(lsum == total){
            cout<<arr[i+1];
        }
        i++;
        j--;
    }
    return 0;
}