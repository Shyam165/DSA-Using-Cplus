#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

int trappingWater(vector<int> &a){
    int n =a.size();
    int prev[n];
    prev[0]=-1;
    int max=a[0];

    for(int i=1;i<=n-1;i++){
         prev[i]=max;
         if(max<a[i]){
            max=a[i];
         }
    }

//shortcut method without using next array
    prev[n-1]=-1;
    max=a[n-1];
     for(int i=n-2;i>=0;i--){
        if(max<prev[i]) prev[i]=max;
         if(max<a[i]){
            max=a[i];
         }
    }

    // int next[n];
    // next[n-1]=-1;
    // max=a[n-1];
    //  for(int i=n-2;i>=0;i--){
    //      next[i]=max;
    //      if(max<a[i]){
    //         max=a[i];
    //      }
    // }

    // int arr[n];  //can be arr is replaced by prev array
    // for(int i=0;i<n;i++){
    //  arr[i]=min(prev[i], next[i]);
    // }

    int water=0;
    for(int i=1;i<n-1;i++){
        if(a[i]<prev[i]){
        water+=(prev[i]-a[i]);
        }
    }
    return water;
}

int main()
{

    vector<int> v1;

    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(1);
    
    int water=trappingWater(v1);
    cout<<water;

    return 0;
}