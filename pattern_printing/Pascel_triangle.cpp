#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // optimised code
    for (int i = 0; i <= n; i++)
    {
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
              if (i==4) cout<<curr;
            // cout << curr << " ";
            curr = curr * (i - j) / (j + 1);   // cout<<fact(i)/fact(j)*fact(i-j);
            
        }
        // cout << endl;
    }
    return 0;
}