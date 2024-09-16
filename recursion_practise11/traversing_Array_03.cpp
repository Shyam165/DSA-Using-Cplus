#include <iostream>
using namespace std;
void traverse(int a[], int n, int i) // if we do it by vector than passbyreferece so no new copy created of vector
{
    if (i == n)
    {
        return;
    }
    cout << a[i];
    traverse(a, n, i + 1);
}
void maxElement(int a[], int n, int i, int max)
{
    if (i == n)
    {
        cout << "the max element is" << max;
        return;
    }
    if (max < a[i])
    {
        max = a[i];
    }
    maxElement(a, n, i + 1, max);
}
int maxEl(int a[], int n, int i)
{
    if (n == i)
    {
        return -100;
    }
    return max(a[i], maxEl(a, n, i + 1));
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int index = 0;
    traverse(a, 5, index);
    maxElement(a, 5, index, 0); // without returning
    cout << "maximum element without using extra variable and using returning" << maxEl(a, 5, index);
}