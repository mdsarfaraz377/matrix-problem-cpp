#include<bits/stdc++.h>
using namespace std;

int main(){
    int m , n;
    cout<<"Enter the number of rows and cols in matrix"<<endl;
    cin>>m>>n;
    int mat[m][n];
    cout<<"Input the matrix element"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Given matrix is:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    cout<<"\nLargest row matrix is:"<<endl;
    for(int i=0; i<m; i++){
        int max = mat[0][i];
        for(int j=1; j<n; j++){
            max = mat[j][i];
        }
        cout<<max<<endl;
    }
    return 0;

}