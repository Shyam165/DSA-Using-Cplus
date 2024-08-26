#include <iostream>
using namespace std;
void print(int i, int n)
{
    if (i > n)
        return;
    cout << i;
    print(++i, n);
    // print(i++, n); this will not work because print(i++, n) is evaluated as:
    // The current value of i is passed to the print function.
    // Then i is incremented, but this incremented value is not used in the recursive call because the increment happens after the value of i is used.
}
void prints(int n)
{
    if (n == 0)
    {

        return;
    }
    prints(n - 1);
    cout << n;
}
int main()
{
    int n;
    cout << "enter the vlaue of n";
    cin >> n;
    print(1, n);
    // lets do this without the use of extra variable i
    // prints(n);
}