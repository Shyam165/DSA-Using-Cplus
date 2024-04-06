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

    v1.push_back(6);

    v1.push_back(2);

    v1.push_back(3);

    v1.push_back(7);

    v1.push_back(4);
    v1.push_back(34);

    v1.push_back(73);

    v1.push_back(42);

    cout << "Enter the rotate steps for k value\n";
    int k;
    cin >> k;

    if(k>v1.size()){
        k=k%v1.size();
    }

    cout << "before the rotation of the array\n";
    display(v1);

    reversePart(0, v1.size() - k - 1, v1);
    reversePart(v1.size() - k, v1.size()-1, v1);
    reversePart(0, v1.size() - 1, v1);

    cout << "after the rotation of the array\n";
    display(v1);
    return 0;
}