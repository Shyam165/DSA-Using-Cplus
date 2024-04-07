#include <iostream>
#include <vector>
using namespace std;

// leetcode problem  number is 48
//  12 23 34 --->34 23 12

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
    cout << "rotation of the 90 degree of the matrix:\n";


    //transpose first
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }


//reverse each row then
    for (int k = 0; k < m; k++)
    {   int i=0;  
       int j=m-1;
        while (i <= j)
        {
            int temp = v[k][j];
            v[k][j] = v[k][i];
            v[k][i] = temp;
            i++;
            j--;
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