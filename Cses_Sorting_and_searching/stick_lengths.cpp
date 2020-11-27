#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int ans=0;
    sort(arr,arr+n);
    long long int median = arr[n/2];
    for(int i=0;i<n;i++){
        ans+=(abs(median-arr[i]));
    }
    cout<<ans<<endl;
}