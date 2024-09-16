// creating permutations abc=>acb,bac,cab etc
//  till now we have seen calls in if else now we seee variable calls according to the string.
//  jitni length of string utni calls
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void permu(string, string);
void permu(string v, string s)
{

    if (s == "")
    {
        cout << v << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        permu(v + s[i], left + right); // while backtracking i decides which call to run which not
    }
}
int main()
{
    string s = "abc";
    permu("", s);
    // cout << s.substr(1);
}