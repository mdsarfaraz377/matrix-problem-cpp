#include<bits/stdc++.h>
using namespace std;

#define M 4
#define N 4

void printSnakePattern(int mat[M][N]){
    //traverse through all the rows
    for(int i=0; i<M; i++){
        if(i%2==0){
            for(int j=0; j<N; j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=N-1; j>=0; j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    int mat[M][N] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}
                    };

    printSnakePattern(mat);
    return 0;
}