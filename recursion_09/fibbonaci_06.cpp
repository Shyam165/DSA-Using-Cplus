#include <iostream>
using namespace std;
// nth term will be equal to sum of the previous 2 terms
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2); // multiple call can be solved and visualized by recursion tree diagram
    // first fibo(n-1) will be solved fully and then fibo(n-2) will be solved by computer
}
int main()
{
    int a;
    cout << "enter the number";
    cin >> a;
    cout << fibo(a);
}