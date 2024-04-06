#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// void sort01_method1(vector<int> &a)
// {
//     int n = a.size();
//     int zeros = 0, ones = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//             zeros++;
//         else
//             ones++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i < zeros)
//             a[i] = 0;
//         else
//             a[i] = 1;
//     }

//     return;
// }

void sort01_method2(vector<int> &a)
{
    int i=0;
    int j=a.size()-1;

   while(i<j){
       if(a[i]==0) i++;
       if(a[j]==1) j--;
       else if(a[i]==1 && a[j]==0){
        swap(a[i], a[j]);
        i++;
        j--;
       }
   }

    return;
}

int main()
{

    vector<int> v1;

    v1.push_back(1);

    v1.push_back(1);

    v1.push_back(0);

    v1.push_back(0);

    v1.push_back(0);

    v1.push_back(1);
    v1.push_back(1);

    display(v1);


    // sort01_method1(v1);

    sort01_method2(v1);

    
    display(v1);

    return 0;
}