#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void subset(string v, string s, int index, bool b)
{
    if (index == s.size())
    {
        cout << v << endl;
        return;
    }
    char first = s[index];
    if (s.length() == 1)
    {
        if (b == true)
            subset(v + s[index], s, index + 1, true);
        subset(v, s, index + 1, true);
        return; // taki niche ka code nhi chale
    }
    char dh = s[index + 1];
    if (first == dh)
    { // duuplicate

        if (b == true)
            subset(v + s[index], s, index + 1, true);
        subset(v, s, index + 1, false);
    }
    else
    { // no duplicate
        if (b == true)
            subset(v + s[index], s, index + 1, true);
        subset(v, s, index + 1, true);
    }
}
int main()
{
    string s = "aba";
    // sorting the string

    sort(s.begin(), s.end());
    subset("", s, 0, true);
}