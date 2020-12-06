#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,x;
    cin>>n>>x;
    vector<lli> coins, ans(x+1);
    for(int i=0;i<n;i++){
        lli p;
        cin>>p;
        coins.push_back(p);
    }
    ans[0]=1;
    for(auto c: coins){
        for(int i=1;i<=x;i++){
            if(c<=i){
                ans[i] += ans[i-c]%1000000007;
                ans[i] %= 1000000007;
            }
        }
    }
    cout<<ans[x]<<endl;
}