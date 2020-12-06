#include<bits/stdc++.h>
using namespace std;

struct proj{
    long long int st;
    long long int end;
    long long int val;
};

bool cmp(struct proj a, struct proj b){
    return a.st>b.st;
}

long long int dp[200001];

long long int solve(struct proj arr[], long long int i, long long int a, long long int b){
    if(i<0){
        return 0;
    }
    else if(arr[i].st<=b){
        return solve(arr,i-1,a,b);
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    dp[i] = std::max(arr[i].val+solve(arr,i-1,arr[i].st, arr[i].end), solve(arr,i-1,a,b));
    return dp[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    struct proj arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i].st>>arr[i].end>>arr[i].val;
    }
    sort(arr,arr+n,cmp);
    memset(dp,-1,sizeof(dp));
    cout<<solve(arr,n-1,0,0)<<endl;
    return 0;
}