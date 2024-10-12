#include<iostream>
#include<vector>
using namespace std;


bool isValid(vector<int> &arr, int n , int m, int maxAllowed){
    int stu=1, time=0;

    for(int i=0;i<n;i++){
        if(arr[i] >maxAllowed){
            return false;
        }
        if(time + arr[i] <=maxAllowed){
            time+=arr[i];

        }
        else{
            stu++;
            time=arr[i];
        }
    }
    return stu > m ? false:true;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    if(m>n) return -1;
    int sum=0;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
        sum+=arr[i];
    }
    int ans=-1;
    int st =max, end=sum;
    
    while (st<=end)
    {
        int mid=st + (end -st)/2;

        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st =mid+1;
        }
    }
    return ans;
}

int main(){
   vector<int> arr={40,30,10,20};
   int n=4, m=2;

   cout<<minTimeToPaint(arr, n, m)<<endl;

    return 0;
}