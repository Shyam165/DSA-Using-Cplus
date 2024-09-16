#include <iostream>
#include <string>
using namespace std;
bool pallindrome(string s, int i, int j)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
        return pallindrome(s, ++i, --j);
}
int main()
{
    string s = "racecar";
    cout << pallindrome(s, 0, s.size() - 1);
}

// First Call:

// Function: pallindrome("bacb", 0, 3)
// Checks: s[0] ('b') == s[3] ('b')
// Since they are equal, it makes the next call: pallindrome("bacb", 1, 2)
// Second Call:

// Function: pallindrome("bacb", 1, 2)
// Checks: s[1] ('a') != s[2] ('c')
// Since they are not equal, it returns false.
// Returning to the First Call:

// The first call received false from the second call.
// Thus, the statement retu/\rn pallindrome(s, ++i, --j); in the first call evaluates to return false;
// The first call's return value is determined by the result of the recursive call it made. Since the recursive call returned false, the first call also returns false. This is how the overall result becomes false.