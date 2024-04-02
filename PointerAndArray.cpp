#include<iostream>
using namespace std;

int main(){

    int arr[]={2, 3,4 ,5, 6};
    int * ptr=arr;
    // int * ptr2=&arr;  //gives error here
    // int *ptr3 = &arr[0];
    // now ptr[1] is same as arr[1]  we can modify it also by using pointer
    //  ptr[0] = 8;
    // *ptr is same as arr[0];
    // ptr[i] = i[ptr] = arr[i]= i[arr] all are same
      for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }

    ptr=arr;
    *ptr =8;  //ptr is pointing to the first element of arr
    *ptr++;   // pointing to the second element
    *ptr=9;
    ptr--;    // first element

cout<<endl;
  for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}