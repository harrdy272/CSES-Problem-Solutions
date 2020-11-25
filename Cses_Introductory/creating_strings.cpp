#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    int count=0;
    do{
        count++;
    }while(next_permutation(v.begin(), v.end()));
    cout<<count<<endl;
    sort(v.begin(), v.end());
    do{
        for(char x: v){
            cout<<x;
        }
        cout<<endl;
    }
    while(next_permutation(v.begin(), v.end()));
}