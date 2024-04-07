#include <iostream>
#include <vector>
using namespace std;

// leetcode 867 problem

vector<vector<int>> transpose(vector<vector<int>> &a)
{
    int m = a.size();
    int n = a[0].size();
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = a[j][i];
        }
    }
    return v;
}

int main()
{
    cout << "enter the number of rows and cols: ";
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << "original matrix: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose of the matrix:\n";
    vector<vector<int>> transposed = transpose(v); // Get the transposed matrix
    for (int i = 0; i < transposed.size(); i++)
    {
        for (int j = 0; j < transposed[0].size(); j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}