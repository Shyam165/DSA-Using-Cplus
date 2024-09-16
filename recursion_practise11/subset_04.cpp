#include <iostream>
#include <string>
using namespace std;
void subset(string v, string s, int index)
{
    if (index == s.size())
    {
        cout << v << endl; // cout is placed here only here because it print just before returning every node last answer if it pplaced after the last call then it will priint only the last call of each branch only
        return;
    }
    subset(v + s[index], s, index + 1);
    subset(v, s, index + 1);
}
int main()
{
    string s = "abc";
    subset("", s, 0);
}