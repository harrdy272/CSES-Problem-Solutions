#include<bits/stdc++.h>
using namespace std;

int dp[101][100001];

vector<int> solve(int arr[], int sum, int n){
    vector<int> vec;
    long long int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = (dp[i-1][j] + dp[i-1][j-arr[i-1]])%1000000007;
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=sum;i++){
        if(dp[n][i]>0){
            vec.push_back(i);
        }
    }
    return vec;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = accumulate(arr,arr+n,0);
    vector<int> vec;
    vec = solve(arr,sum,n);
    cout<<vec.size()<<endl;
    for(int x: vec){
        cout<<x<<" ";
    }
}