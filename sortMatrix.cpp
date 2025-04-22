#include<bits/stdC++.h>
using namespace std;

int main(){
    vector<vector<int>>mat{{1,5,4},
                           {2,8,7},
                           {3,6,9}};

    vector<int>ans;
    int n = mat.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans.push_back(mat[i][j]);
        }
    }

    sort(ans.begin(), ans.end());
    int k =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = ans[k++];
        }
    }

    for(auto it:mat){
        for(auto vt:it){
            cout<<vt<<" ";
        }
        cout<<endl;
    }

    return 0;
}