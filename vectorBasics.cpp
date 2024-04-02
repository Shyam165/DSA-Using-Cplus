#include<iostream>
#include<vector>
using namespace std;

int main(){
    
     vector <int> v;   //here it is zero sized dynamic array
     v.push_back(23);
    //  v[1]=0  //here it will give the garbage value as 0 so always use push back func
     v.push_back(23);
     v.push_back(23);
     v.push_back(23);

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }





   return 0;
}