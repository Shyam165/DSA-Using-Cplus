#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of rows and columns for 1st matrix: ";
    int m, n,p,q;
    cin >> m>>n;
    cout << "enter the number of rows and columns for 2nd matrix: ";
     cin >> p>>q;

    if(n==p){
        int a[m][n];
        int b[p][q];
    cout << "enter the element for 1st matrix:  \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
     cout << "enter the element for 2nd matrix:  \n";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    //resultant matrix
    int res[m][q];
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=a[i][k] *b[k][j];
            }
        }
    }
    cout<<"Resultant matrix after multiplication are:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"matrix cannot be multiplie:";
    }
}