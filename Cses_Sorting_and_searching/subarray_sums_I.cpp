#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,x;
    cin>>n>>x;
    lli arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    lli summ=0;
    lli count=0;
    map<lli, lli> m;
    for(int i=0;i<n;i++){
        summ += arr[i];
        if(summ==x){
            count++;
        }
        if(m.find(summ-x)!=m.end()){
            count += m[summ-x];
        }
        m[summ]++;

    }
    cout<<count<<endl;
}