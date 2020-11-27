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
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<*max_element(arr,arr+n)<<endl;
    }
    else{
        long long int curr=0;
        long long int maxx=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr<0){
                curr=0;
            }
            if(curr>maxx){
                maxx=curr;
            }
        }
        cout<<maxx<<endl;
    }
}