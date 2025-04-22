#include<bits/stdc++.h>
#define MAX 100
using namespace std;

//counted all sorted rows in decreasing order
/////////////////Asked by samsung//////////////////////////

int sortedCount(int mat[][MAX], int row, int col){
    int ans = 0;
    for(int i=0; i<row; i++){
        int j;
        for(j=0; j<col-1; j++){
            if(mat[i][j+1]<=mat[i][j])
                break;
        }
        if(j==col-1)
            ans++;
    }

    for(int i=0; i<row; i++){
        int j;
        for(j=col-1; j>0; j--)
            if(mat[i][j-1]<=mat[i][j])
                break; 
        
        if(col>1 && j==0)
            ans++;
    }

    return ans;

}

int main(){
    int m = 4, n=5;
    int mat[][MAX] = {{1, 2, 3, 4, 5},
                      {4, 3, 1, 2, 6},
                      {8, 7, 6, 5, 4},
                      {5, 7, 8, 9, 10}};

    cout<<sortedCount(mat,m,n);
    return 0;
}