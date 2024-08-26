#include <iostream>
using namespace std;
int twostair(int n)
{
    if (n == 1)
        return 1; // only one way to climb 1 stair
    else if (n == 2)
    {
        return 2; // two way to climb 2 stais either 1 step two times or 2 step single time
    }
    return twostair(n - 1) + twostair(n - 2);
}
int threestairs(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 4;
    }
    return threestairs(n - 1) + threestairs(n - 2) + threestairs(n - 3);
}
int main()
{
    int s;
    cout << "enter the number of stairs";
    cin >> s;
    cout << "the possible no. of ways to climb stairs are";
    cout << twostair(s);
    // cout<<"the possible no. of ways to climb stairs for 3 stair problem is";
    // cout<<threestairs(s);
    return 0;
}