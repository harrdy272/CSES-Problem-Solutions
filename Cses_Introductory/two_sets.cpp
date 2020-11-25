#include<bits/stdc++.h>
using namespace std;

// vector<int> kk;

// void solve(long long int sum, int i, vector<int> v, vector<int> naya){
//     if(sum==0){
//         for(int i=0;i<naya.size();i++){
//             naya[i]++;
//         }
//         kk=naya;
//         return;
//     }
//     else if(sum<0){
//         return;
//     }
//     else if(i<0){
//         return;
//     }
//     else if(v[i]>sum){
//         solve(sum,i-1,v,naya);
//     }
//     naya.push_back(i);
//     solve(sum-v[i],i-1,v,naya);
//     if(sum==0){
//         return;
//     }
//     naya.pop_back();
//     solve(sum,i-1,v,naya);
// }



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int sum = n*(n+1)/2;
    if(sum%2==1){
        cout<<"NO"<<endl;
    }
    else{
        //memset(dp,-1,sizeof(dp));
        cout<<"YES"<<endl;
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        if(n%2==0){
            cout<<n/2<<endl;
            int i=1,j=n;
            long long int val=sum/2;
            while(val>0){
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
                val=val-(i+j);
            }
            cout<<endl;
            cout<<n/2<<endl;
            while(i<j){
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
            }
        }
        else{
            cout<<n/2<<endl;
            int i=1,j=n;
            long long int val=sum/2;
            while(val>i+j){
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
                val=val-(i+j);
            }
            cout<<j<<endl;
            j--;
            cout<<n/2 + 1<<endl;
            while(i<j){
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
            }
        }
    }
    
}