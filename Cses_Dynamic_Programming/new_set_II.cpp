#include<bits/stdc++.h>
using namespace std;

int dp[501][100001];
int solve(int arr[], int i, int sum){
    if(sum==0){
        return 1;
    }
    else if(sum<0){
        return 0;
    }
    else if(i<0){
        return 0;
    }
    else if(arr[i]>sum){
        return solve(arr,i-1,sum);
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum]%1000000007;
    }
    dp[i][sum] = (solve(arr,i-1,sum-arr[i])%1000000007 + solve(arr,i-1,sum)%1000000007)%1000000007;
    return dp[i][sum]%1000000007;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;++i){
        arr[i-1]=i;
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(arr,n-1,n*(n+1)/4)/2<<endl;
}