#include<bits/stdc++.h>
using namespace std;

struct ss{
    long long int val;
    int index;
};

bool cmp(ss a, ss b){
    return a.val<b.val;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int x;
    cin>>x;
    ss arr[n];
    for(int i=0;i<n;i++){
        long long int p;
        cin>>p;
        arr[i].val=p;
        arr[i].index = i+1;
    }
    sort(arr,arr+n,cmp);
    int i=0,j=n-1;
    int flag=0;
    while(i<j){
        long long int sum = arr[i].val+arr[j].val;
        if(sum==x){
            flag=1;
            cout<<arr[i].index<<" "<<arr[j].index<<endl;
            break;
        }
        else if(sum>x){
            j--;
        }
        else if(sum<x){
            i++;
        }
    }
    if(flag==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
}