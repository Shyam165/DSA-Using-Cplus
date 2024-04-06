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

    display(v1);

    reversePart(0, 3, v1);

    display(v1);
    return 0;
}