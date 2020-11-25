#include<bits/stdc++.h>
using namespace std;

long long int power(long long int b){
    long long int p = (long long int)2;
    long long int dp[b+1];
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<=b;i++){
        dp[i] = ((dp[i-1]%1000000007)*2)%1000000007;
    }
    return dp[b];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int val = power(n)%1000000007;
    cout<<val<<endl;
}