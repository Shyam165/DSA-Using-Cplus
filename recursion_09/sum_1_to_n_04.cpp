#include <iostream>
using namespace std;
void sum(int b, int n)
{
    if (n == 0)
    {
        cout << b;
        return;
    }
    b = b + n;
    sum(b, n - 1);
}
int sums(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sums(n - 1);
}

int main()
{
    int n;
    cout << "enter the vlaue of n";
    cin >> n;
    // sum(0, n);
    // without extra variable by returning the sum
    cout << sums(n);
}