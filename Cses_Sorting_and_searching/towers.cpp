#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> s;
    for(int i=0;i<n;i++){
        long long int val;
        cin>>val;
        auto it = upper_bound(s.begin(), s.end(), val);
        if(it!=s.end()){
            *it=val;
        }
        else{
            s.push_back(val);
        }
    }
    cout<<s.size()<<endl;
}