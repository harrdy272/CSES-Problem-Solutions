#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

struct dead{
    lli dur;
    lli dl;
};

bool cmp(dead a, dead b){
    return a.dur<b.dur;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    dead arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].dur>>arr[i].dl;
    }
    sort(arr,arr+n,cmp);
    lli summ[n];
    lli val=0;
    for(int i=0;i<n;i++){
        val += arr[i].dur;
        summ[i]=val;
    }
    lli ans=0;
    for(int i=0;i<n;i++){
        ans += (arr[i].dl - summ[i]);
    }
    cout<<ans<<endl;
}