#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n], x;
    cin>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0,j=n-1,count=0;
    while(i<j){
        long long int val = arr[i]+arr[j];
        if(val<=x){
            i++;
            j--;
            count++;
        }
        else  if(val>x){
            j--;
            count++;
        }
    }
    if(i==j){
        count++;
    }
    cout<<count<<endl;
}