#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli dp[1000001];
vector<lli> coins;

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
    lli best=0;
    for(auto c: coins){
        best += solve(n-c)%1000000007;
    }
    dp[n]=best%1000000007;
    return dp[n]%1000000007;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        lli p;
        cin>>p;
        coins.push_back(p);
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(x)<<endl;
}