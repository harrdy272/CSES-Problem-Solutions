#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, job;
    cin>>n>>job;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll lo = 0, hi = 1e18, ans, curr;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        curr=0;
        for(int i=0;i<n;i++){
            curr = curr + (mid/arr[i]);
            if(curr>job){
                break;
            }
        }
        if(curr>=job){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
}