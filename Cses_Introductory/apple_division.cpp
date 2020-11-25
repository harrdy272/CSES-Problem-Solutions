#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long long int min=__INT_MAX__;
    for(long long int i=0;i<(1<<n);i++){
        long long int new_s=0;
        for(long long int j=0;j<n;j++){
            if(i & 1<<j){
                new_s+=arr[j];
            }
        }
        long long int p = abs(sum-2*new_s);
        min=std::min(min,p);
    }
    cout<<min<<endl;
}