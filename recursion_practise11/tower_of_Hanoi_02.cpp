#include <iostream>
#include <string>
using namespace std;
// three steps in this problem
//     1)n-1 disks  A->B
//     2)nth disk A->C
//     3)n-1 disks B->C
// 3 TOWERS ARE A,B,C WHERE A IS SOURCE B IS HELPER AND C IS DESTINATION

// FN(SOURCE,HELPER,DESTINATION)
void hanoi(int n, char a, char b, char c)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, a, c, b);
    cout << a << "-->" << c << endl; // printing source to destination
    hanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cout << "enter the number of the disks";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}
