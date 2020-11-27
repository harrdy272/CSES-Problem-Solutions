#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    set<int> s;
    multiset<int> k;
    s.insert(0);
    s.insert(n);
    k.insert(n);
    for(int i=0;i<t;i++){
        int p;
        cin>>p;
        auto it = s.upper_bound(p);
        int r = *it;
        --it;
        int l=*it;
        s.insert(p);
        auto bt = k.find(r-l);
        if(bt!=k.end()){
            k.erase(bt);
            k.insert(r-p);
            k.insert(p-l);
        }
        cout<<*k.rbegin()<<" ";
    }
    
}