#include <iostream>
using namespace std;
int f = 1;
int fact(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    f = n * fact(n - 1);
}
int main()
{
    int a;
    cout << "enter the number";
    cin >> a;
    cout << fact(a);
}
//  recursion=>problem can be divided into something+subproblem