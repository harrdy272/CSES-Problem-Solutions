#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n], end[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]>>end[i];
    }
    sort(arr,arr+n);
    sort(end,end+n);
    int i=0,j=0;
    int count=0, maxx=0;
    while(i<n && j<n){
        if(arr[i]<end[j]){
            i++;
            count++;
        }
        else{
            j++;
            count--;
        }
        if(count>maxx){
            maxx=count;
        }
    }
    cout<<maxx<<endl;

}