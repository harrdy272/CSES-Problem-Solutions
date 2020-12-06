#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    lli ans[n+1];
    ans[0]=0;
    // for(int i=1;i<=9;i++){
    //     ans.push_back(1);
    // }
    for(lli i=1;i<=n;i++){
        lli val = i;
        vector<lli> digits;
        while(val>0){
            lli rem = val%10;
            digits.push_back(rem);
            val=val/10;
        }
        vector<lli> fin;
        for(lli j=0;j<digits.size();j++){
            if(digits[j]!=0){
                fin.push_back(digits[j]);
            }
        }
        lli best = 9999999;
        for(auto c: fin){
            best = std::min(best, ans[i-c]+1);
        }
        ans[i]=best;
    }
    // for(auto x: ans){
    //     cout<<x<<" ";
    // }
    cout<<ans[n]<<endl;
}