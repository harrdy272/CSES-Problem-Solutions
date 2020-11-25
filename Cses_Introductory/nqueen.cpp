#include<bits/stdc++.h>
using namespace std;

long long int coun=0;

bool takencol[8], takendiag1[16], takendiag2[16];

void solve(char mat[][8], int row){
    if(row==8){
        coun++;
        return;
    }
    for(int col=0;col<8;col++){
        if(!takencol[col] && !takendiag1[row-col+8-1] && !takendiag2[row+col]){
            if(mat[row][col]=='.'){
                takencol[col]=true;
                takendiag1[row-col+8-1]=true;
                takendiag2[row+col] = true;
                solve(mat, row+1);
                takencol[col]=false;
                takendiag1[row-col+8-1]=false;
                takendiag2[row+col] = false;
            }
            
        }
    }
    
}

int main(){
    char mat[8][8];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int j=0;j<8;j++){
            mat[i][j]=s[j];
        }
    }
    solve(mat,0);
    cout<<coun<<endl;
}