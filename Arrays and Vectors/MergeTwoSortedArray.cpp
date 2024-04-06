#include <iostream>
#include <vector>
using namespace std;

vector<int> mergesortedArray(vector<int> &arr1, vector<int>&arr2){
     int m=arr1.size();
     int n=arr2.size();
     vector<int>f(m+n);
     int i=0;
     int j=0;
     int k=0;
     while(i<=m-1  &&  j<=n-1){
        if(arr1[i]<arr2[j]){
            f[k]=arr1[i];
            i++;
        }
        else{
            f[k]=arr2[j];
            j++;
        }
        k++;
     }
     if(i==m){
        while(j<=n-1){
            f[k]=arr2[j];
            j++;
            k++;
        }
     }
     if(j==n){
        while(i<=m-1){
            f[k]=arr1[i];
            k++;
            i++;
        }
     }
     return f;
}

int main()
{
    vector<int> v1;

  for(int i=0;i<4;i++){
    int x;
    cin>>x;
    v1.push_back(x);

  }

    vector<int> v2;
 for(int i=0;i<6;i++){
    int x;
    cin>>x;
    v2.push_back(x);

  }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
   
   vector<int>v3 =  mergesortedArray(v1, v2);



 for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}