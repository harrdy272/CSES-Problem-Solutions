#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int lli;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,k;
    cin>>n>>k;
    lli arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    indexed_set s;
    for(int i=0;i<k;i++){
        s.insert(arr[i]);
    }
    lli val = *s.find_by_order((k+1)/2-1);
    lli ans=0;
    for(int i=0;i<k;i++){
        ans += abs(arr[i]-val);
    }
    cout<<ans<<" ";
    for(int i=0;i<n-k;i++){
        s.erase(s.find_by_order(s.order_of_key(arr[i])));
        s.insert(arr[i+k]);
        lli nval = *s.find_by_order((k+1)/2-1);
        ans = ans + abs(arr[i+k]-nval) - abs(val-arr[i]);
        if(k%2==0){
            ans = ans - (nval-val);
        }
        val = nval;
        cout<<ans<<" ";
    }

}