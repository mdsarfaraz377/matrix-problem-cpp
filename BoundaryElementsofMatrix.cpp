#include<bits/stdc++.h>
using namespace std;

#define MAX 4

void printBoundaryEle(int mat[][MAX], int row, int col){
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            if(i==0 || j==0 || i==row-1 || j==col-1){
                cout<<mat[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int mat[4][MAX] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 }
    };

    printBoundaryEle(mat, 4, 4);
    return 0;
 
}