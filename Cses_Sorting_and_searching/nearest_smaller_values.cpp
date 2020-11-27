#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    lli arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n];
    ans[0]=0;
    priority_queue<lli, vector<lli>, greater<lli>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(arr[i]==pq.top()){
            ans[i]=0;
        }
        else{
            int j=i-1;
            while(j>=0){
                if(arr[j]<arr[i]){
                    ans[i]=j+1;
                    break;
                }
                else{
                    j=ans[j]-1;
                }
            }
        }
    }
    for(int x: ans){
        cout<<x<<" ";
    }
    
}