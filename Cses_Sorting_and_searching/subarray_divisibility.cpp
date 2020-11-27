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
    long long int mod[n];
    memset(mod,0,sizeof(mod));
    long long int summ=0;
    for(int i=0;i<n;i++){
        summ+=arr[i];
        mod[((summ%n)+n)%n]++;
    }
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(mod[i]>1){
            ans += (mod[i]-1)*mod[i]/2;
        }
    }
    ans += mod[0];
    cout<<ans<<endl;
}