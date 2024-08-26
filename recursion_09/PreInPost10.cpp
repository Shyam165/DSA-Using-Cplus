#include <iostream>
using namespace std;
// create tree for this to dry run this program
// top to down pre
// left to right in
// down to up post
// another good option is to use the stack call draw stack and put functions calling with line number of where fn is called so we know where to resume the after remaining function
void pip(int n)
{
    if (n == 0)
        return;
    cout << "Pre" << n << endl;
    pip(n - 1);
    cout << "In" << n << endl;
    pip(n - 1);
    cout << "Post" << n << endl;
}
int main()
{
    pip(3);
}