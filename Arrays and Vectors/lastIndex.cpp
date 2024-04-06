#include<iostream>
#include<vector>
using namespace std;

int main(){
    
     vector <int> v;   
     v.push_back(2);
     v.push_back(23);
     v.push_back(3);
     v.push_back(4);
     v.push_back(21);
     v.push_back(237);
     v.push_back(2);
     v.push_back(42);

     int x=2;
     int id=-1;
  
  //  for(int i=0;i<v.size();i++){
    //    if(v[i]==x)
    //    id=i;
    //  }


    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
        id=i;
        break;
    }
    }

     cout<<id;


   return 0;
}