#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int solve(int n, int m, int arr[]){
    int dp[n+2][m+2];
    memset(dp,0,sizeof(dp));
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1){
                if(arr[i-1]==0 || arr[i-1]==j){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
            }
            else{
                if(arr[i-1]==0 || arr[i-1]==j){
                    dp[i][j] = ((dp[i-1][j]%mod + dp[i-1][j-1]%mod)%mod + dp[i-1][j+1]%mod)%mod;
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    }
    for(int i=1;i<=m;i++){
        ans+=(dp[n][i]);
        ans = ans%mod;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(n,m,arr)<<endl;
}