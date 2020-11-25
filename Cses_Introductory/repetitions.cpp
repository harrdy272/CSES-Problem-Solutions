#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int i=1,maxx=1, count=1;
    char b=s[0];
    while(i<s.length()){
        if(s[i]==b){
            count++;
        }
        else{
            b=s[i];
            count=1;
        }
        if(count>maxx){
            maxx=count;
        }
        i++;
    }
    cout<<maxx<<endl;
}