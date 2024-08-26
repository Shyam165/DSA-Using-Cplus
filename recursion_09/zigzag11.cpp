#include "iostream"
using namespace std;
void p(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n;
    p(n - 1);
    cout << n;
    p(n - 1);
    cout << n;
}
int main()
{
    p(1);
}