#include<bits/stdc++.h>
using namespace std;
 

void mulMat(int r1, int c1, int mat1[][2], int r2, int c2, int mat2[][2]){
    int k,i,j;
    int res[r1][c2];
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            res[i][j] = 0;

            for(k=0; k<r2; k++){
                *(*(res+i)+j) += *(*(mat1+i)+k) * *(*(mat2+k)+j);
            }
        }
    }

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            cout<<*(*(res+i)+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int mat1[][2] = {{1,1}, {2,2}};
    int mat2[][2] = {{1,1}, {2,2}};
    int r1=2,r2=2,c1=2,c2=2;

    //function call
    mulMat(r1,c1, mat1, r2, c2, mat2);
    return 0;
}