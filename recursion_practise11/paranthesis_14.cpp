// //Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// hint==>at every instant opening brackets>=closing brackets and when opening =closing we will not call closing bracket fn at all as no output sample has closing bracket at start
#include <iostream>
#include <string>
using namespace std;
void paranthesis(string s, int o, int c, int n)
{
    if (s.size() == (n * 2))
    {
        cout << s << endl;
        return;
    }
    if (o < n)
        paranthesis(s + '(', o + 1, c, n);
    if (c < o && c < n) // closing bracket inserted only if already opening inserted and closing less than the n and o if c==o then also closing will not be inserted
        paranthesis(s + ')', o, c + 1, n);
}
int main()
{
    int open = 0, close = 0, pair;
    cout << "Enter the number of pairs";
    cin >> pair;
    paranthesis("", open, close, pair);
}