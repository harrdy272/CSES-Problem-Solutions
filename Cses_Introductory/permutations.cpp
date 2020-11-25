#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        int arr[n];
        int i=0,j=2,k=1;
        while(j<=n){
            arr[i]=j;
            i++;
            j=j+2;
        }
        while(k<=n){
            arr[i]=k;
            i++;
            k=k+2;
        }
        for(int x: arr){
            cout<<x<<" ";
        }
    }
}