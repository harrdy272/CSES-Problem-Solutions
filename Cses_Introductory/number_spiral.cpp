#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int i,j;
        cin>>i>>j;
        if(j<=i){
            if(i%2==0){
                cout<<i*i-j+1<<endl;
            }
            else{
                cout<<(i-1)*(i-1) + j<<endl;
            }
        }
        else{
            if(j%2!=0){
                cout<<j*j-i+1<<endl;
            }
            else{
                cout<<(j-1)*(j-1)+i<<endl;
            }
        }
    }
}