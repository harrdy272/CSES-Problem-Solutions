#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    long long int count=0;
    rep(i,1,n){
        if(arr[i]<arr[i-1]){
            count+=(abs(arr[i]-arr[i-1]));
            arr[i]=arr[i-1];
        }
    }
    cout<<count<<endl;
}