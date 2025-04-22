#include<bits/stdc++.h>
using namespace std;

#define M 4
#define N 4

void printSumDiagonal(int mat[M][N]){
    int maxi = 0, mini = 0;
    for(int i=0; i<N; i++){
        maxi += mat[i][i];
        mini += mat[i][N-i-1];
    }

    printf("%s","Principal Diagonal:");
    printf("%d\n", maxi);
    printf("%s", "Secondary Diagonal:"); 
    printf("%d\n", mini);
}
int main(){
    int mat[4][4] = {{1, 2, 3, 4}, 
                     {5, 6, 7, 8}, 
                     {1, 2, 3, 4}, 
                     {5, 6, 7, 8}
    };
    printSumDiagonal(mat);
    return 0;
}