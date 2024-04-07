#include <iostream>
using namespace std;
int main()
{
    int m = 3;
    int n = 3;
    int a[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    //    cout<<"columns wise printing:\n";

    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout<<a[j][i]<<" ";
    //         }
    //     }

    cout << "columns wise waveform printing\n";

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[j][i] << " ";
            }
        }
        else{
             for (int j = n-1; j>=0; j--)
            {
                cout << a[j][i] << " ";
            }

        }
    }
}