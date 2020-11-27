#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        long long int p;
        cin>>p;
        s.insert(p);
    }
    cout<<s.size()<<endl;
}