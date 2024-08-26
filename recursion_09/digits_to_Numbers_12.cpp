#include <iostream>
#include <vector>
#include <string>
using namespace std;
string breakDigits(int n)
{
    if (n == 0)
    {
        return "";
    }
    string a = to_string(n % 10);
    string b = breakDigits(n / 10);
    return a + b;
}
int main()
{
    int a = 4512;
    vector<string> v = {"one", "two", "three", "four", "five"};
    string c = breakDigits(4512);
    int i = c.size();
    for (; i >= 0; i--)
    {
    }
}