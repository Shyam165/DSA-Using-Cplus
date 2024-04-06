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

void sort01_method2(vector<int> &a)
{
    int i=0;
    int j=a.size()-1;

   while(i<j){
       if(a[i]<0) i++;
       if(a[j]>=0) j--;
       else if(a[i] >=0 && a[j]<0){
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

    v1.push_back(-1);

    v1.push_back(2);

    v1.push_back(-1);

    v1.push_back(3);
    v1.push_back(-1);
    v1.push_back(1);

    display(v1);

    sort01_method2(v1);

    display(v1);

    return 0;
}