// generate all binary strings of length n without consecutive 1's
// ex=>let n=2 then 00,0 1,10 but not 11
#include <iostream>
#include <string>
using namespace std;
void binary(string s, int n)
{
    if (s.size() == n)
    {
        cout << s;
        cout << endl;
        return;
    }
    binary(s + '0', n);
    if (s[s.size() - 1] != '1')
        binary(s + '1', n);
}
int main()
{
    int n;
    cout << "enter the length string";
    cin >> n;
    binary("", n);
}
