// using older code of power requires many steps but this require only 2^x=y so it require only x steps;for ex older reqire 2^64 require 64 steps but this require only 6 steps
#include <iostream>
using namespace std;
int powr(int b, int p)
{
    int ans;
    if (p == 1)
    {
        return b;
    }
    // return powr(b,p/2)*powr(b,p/2); this will return true answer but more computation why calculating same thing so we put in ans variable
    ans = powr(b, p / 2);
    if (p % 2 == 0)
    {
        return ans * ans;
    }
    else
        return ans * ans * b;
}
int main()
{
    int b, p;
    cout << "ebter base and power";
    cin >> b >> p;
    cout << powr(b, p);
}