#include <iostream>
using namespace std;

// hcf(a,b)=min(a,b);
// lcm(a,b)=max(a,b)
int gcd(int a, int b)
{
    int i = min(a, b);
    for (; i >= 2; i--)
    {
        if (24 % i == 0 && 60 % i == 0)
            return i;
    }
    return 1; // no common factor
}

int recursivegcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    // int temp = a;

    // a = b % a;
    // b = temp;

    // return recursivegcd(a, b);
    return recursivegcd(b % a, a);
}
int main()
{
    // cout << gcd(24, 60); // by loops iit it has high complexity as for hcf 1000 and 1001 it will run 999 times so do it by recursion so reduce complexity by euclids
    cout << recursivegcd(24, 60); // o(log(a+b))
}

// Start with two numbers, let's call them a and b, where a is greater than or equal to b.
// If b is greater than a, swap the values of a and b.
// Divide a by b and find the remainder. Let's call this remainder r.
// If r is equal to 0, then b is the GCD of the original two numbers (a and b). Terminate the algorithm.
// If r is not equal to 0, set a to the value of b, and set b to the value of r.
// Go back to step 3 and repeat the process until the remainder becomes 0.
// Once the remainder becomes 0, the GCD is the value of b.