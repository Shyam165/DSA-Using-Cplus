#include <iostream>
using namespace std;
int maze(int sc, int sr, int ec, int er)
{
    if (sc > ec || sr > er) // base case
        return 0;
    if (sc == ec || sr == er) // base case
        return 1;

    int right = maze(sc + 1, sr, ec, er);
    int down = maze(sc, sr + 1, ec, er);
    return right + down;
}
void showPath(int sc, int sr, int er, int ec, string s)
{
    if (sc > ec || sr > er) // base case
        return;
    if (sc == ec || sr == er)
    { // base case
        cout << s << endl;
        return;
    }

    showPath(sc + 1, sr, er, ec, s + "R");
    showPath(sc, sr + 1, er, ec, s + "D");
}
int main()
{
    int sc = 1;
    int sr = 1;
    int ec = 3;
    int er = 3;
    cout << maze(sc, sr, ec, er);
    showPath(sc, sr, er, ec, "");
}