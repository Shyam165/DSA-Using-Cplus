#include <iostream>
#include <string>
// we need to remove all the occurences of "a" from the string
using namespace std;
void rChar(string s, string v) // we are passing extra parameter to make change in it and return it or print it so it cant be done and as 3 methods of recurison1)before and after call
                               //  2)parameterized reccurison
                               // 3)return type   n+f(n-1)
{
    if (v.size() == 0)
    {
        cout << s;
        return;
    }
    char first = v[0];
    if (first == 'a')
    {
        rChar(s, v.substr(1));
    }
    else
        rChar(s + first, v.substr(1));
}
void efficientrChar(string s, string v, int index)
{ // in above method in every call a new space is allocated to substring so not efficient.
    if (index == v.size())
    {
        cout << s;
        return;
    }
    char first = v[index];
    if (first == 'a')
    {
        efficientrChar(s, v, index + 1);
    }
    else
        efficientrChar(s + first, v, index + 1);
}
int main()
{
    string s = "abcabab";
    rChar("", s);

    // here return type is not optional it is used when necessary in some cases only we put return type where we need to do something with answer like add it etc think of this question while placing a return type in base condition and the question calling
    // so learnings are use return type when we need to manipulate the answer which is returned otherwise not
    int index = 0;
    efficientrChar("", s, index); // a better method than previoius one
}

// if theere is any call of like return f(n-1)+f(n-2) then complexity will be (0power2n) exponential pwoer complexity