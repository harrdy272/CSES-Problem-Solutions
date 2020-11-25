#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n-1;i++){
        int p;
        cin>>p;
        arr[p]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
            break;
        }
    }
}