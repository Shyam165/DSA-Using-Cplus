#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "enter the number of rows and cols\n ";
    int m;
    cin >> m;
    vector<vector<int>> v(m, vector<int>(m));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << "original matrix: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i <m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
           swap(v[i][j], v[j][i]);
        }
    }

 for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}