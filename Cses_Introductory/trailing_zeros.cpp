#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    int ans=0;
    while(floor(n/5)!=0){
        ans+=floor(n/5);
        n/=5;
    }
    cout<<ans<<endl;
}