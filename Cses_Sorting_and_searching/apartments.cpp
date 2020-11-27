#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,k;
    cin>>n>>m>>k;
    long long int app[n], apa[m];
    for(int i=0;i<n;i++){
        cin>>app[i];
    }
    for(int i=0;i<m;i++){
        cin>>apa[i];
    }
    sort(app,app+n);
    sort(apa,apa+m);
    int i=0,j=0;
    int count=0;
    while(i<n && j<m){
        if(abs(app[i]-apa[j])<=k){
            count++;
            i++;
            j++;
        }
        else if(app[i]<apa[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count<<endl;
}