#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int p=0,q=2,r=0;
    for(int i=1;i<=n;i++){
        cout<<p*q<<endl;
        p+=(i+2);
        if(i==1){
            q=2;
        }
        else{
            q+=(2*(i-1));
        }
    }
}