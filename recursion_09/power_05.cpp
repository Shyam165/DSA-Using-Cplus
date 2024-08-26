#include <iostream>
using namespace std;
int powr(int a, int p)
{
    if (p == 1)
    {
        return a;
    }
    return a * powr(a, p - 1);
}
int main()
{
    int a, p;
    cout << "Enter the number and power";
    cin >> a >> p;
    cout << powr(a, p);
}