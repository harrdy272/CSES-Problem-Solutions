#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli dp[10001][10001];
lli solve(lli arr[], lli i, lli j,lli sum){
    if(i==j){
        return arr[i];
    }
    else if(j==i+1){
        return std::max(arr[i], arr[j]);
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j] = std::max(sum - solve(arr,i+1,j,sum-arr[i]), sum-solve(arr,i,j-1,sum-arr[j])); 
    return dp[i][j];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    lli arr[n];
    lli sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(arr,0,n-1,sum)<<endl;
}