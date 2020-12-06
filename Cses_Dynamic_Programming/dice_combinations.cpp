#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli dp[1000001];


lli solve(lli n){
    if(n<0){
        return 0;
    }
    else if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = solve(n-1)%1000000007+solve(n-2)%1000000007+solve(n-3)%1000000007+solve(n-4)%1000000007+solve(n-5)%1000000007+solve(n-6)%1000000007;
    return dp[n]%1000000007;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<solve(n)<<endl;
}