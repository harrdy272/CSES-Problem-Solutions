#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

struct room{
    lli arr;
    lli end;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    room arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].arr>>arr[i].end;
    }
    set<lli> s;
    vector<lli> v;
    lli maxx=-1;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            s.insert(arr[i].end);
        }
        else{
            if(arr[i].arr <= *s.begin()){
                s.insert(arr[i].end);
            }
            else{
                s.erase(s.begin());
                s.insert(arr[i].end);
            }
        }
        v.push_back(s.size());
        maxx = std::max(maxx,v[v.size()-1]);
    }
    cout<<maxx<<endl;
    for(lli x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}