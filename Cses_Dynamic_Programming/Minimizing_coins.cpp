#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,x;
    cin>>n>>x;
    lli arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    lli value[x+1];
    value[0]=0;
    for(lli i=1;i<=x;i++){
        value[i]=99999999;
        for(auto c: arr){
            if(i-c>=0){
                value[i] = std::min(value[i], 1+value[i-c]);
            }
        }
    }
    if(value[x]==99999999){
        value[x]=-1;
    }
    cout<<value[x]<<endl;
}