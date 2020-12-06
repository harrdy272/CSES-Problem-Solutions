#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    lli arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // lli lis[n];
    // for(int i=0;i<n;i++){
    //     lis[i]=1;
    //     for(int j=0;j<i;j++){
    //         if(arr[j]<arr[i]){
    //             lis[i] = std::max(lis[i], lis[j]+1);
    //         }
    //     }
    // }
    // cout<<*max_element(lis,lis+n)<<endl;
    vector<lli> ans;
    for(int i=0;i<n;i++){
        auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
        if(it==ans.end()){
            ans.push_back(arr[i]);
        }
        else{
            *it=arr[i];
        }
    }
    cout<<ans.size()<<endl;
}