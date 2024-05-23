#include<iostream>
#include<vector>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n= matrix[0].size();
        int minr =0, minc=0;
        int maxr=m-1, maxc=n-1;
        int tne = n*m;
        int count =0;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int j=minc;j<=maxc && count<tne;j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;
            // down
            for(int i=minr;i<=maxr && count<tne;i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            //left
            for(int j=maxc;j>=minc && count<tne;j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
            //up
            for(int i=maxr;i>=minr && count<tne;i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }

int main(){
     cout << "enter the number of rows and cols\n ";
    int m;
    cin >> m;
    vector<vector<int>> v(m, vector<int>(m));
    vector<int>f;
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
    cout<<"Spiral form of the matrix elements:\n";
    f=spiralOrder(v);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }

}