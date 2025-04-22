#include<bits/stdc++.h>
using namespace std;

#define N 3

void sortMatrix(int mat[][N]){
    int *ptr = (int *)mat;
    sort(ptr, ptr+N*N);
}

int main(){
    int mat[N][N] = {1, 0, 3, 
                     2, 5, 6, 
                     9, 4, 8};
    
    sortMatrix(mat);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}