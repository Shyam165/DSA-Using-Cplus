#include <iostream>
#include <vector>
using namespace std;


// #leetcode problem number 31

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// void permutation(vector<int>&a){
//     int idx=-1;
//     int n=a.size();
//     for(int i=n-2;i>=0;i--){
//         if(a[i]<a[i+1]){
//             idx=i;
//             break;
//         }
//     }
//     if(idx==-1){
//         reversePart(0, n-1, a);
//         return ;
//     }
//        reversePart(idx+1, n-1+1, a);
//        int j=-1;
//        for(int i=idx;i<n;i++){
//         if(a[i]<a[i+1]){
//             j=i;
//         }
//        }
//        swap(a[idx],a[j]);
//     //    int temp=a[idx];
//     //    a[idx]=a[j];
//     //    a[j]=a[idx];
//        return;

// }

void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{

    vector<int> v1;

    v1.push_back(1);

    v1.push_back(3);

    v1.push_back(5);

    v1.push_back(2);

    display(v1);

    int idx=-1;
    int n=v1.size();
    for(int i=n-2;i>=0;i--){
        if(v1[i]<v1[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reversePart(0, n-1, v1);
        display(v1);
        exit(0);
    }
       reversePart(idx+1, n-1, v1);
       int j=-1;
       for(int i=idx+1;i<n;i++){
        if(v1[i]>v1[idx]){
            j=i;
            break;
        }
       }
       swap(v1[idx],v1[j]);

    display(v1);
    return 0;
}