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
    // for(int i=0;i<n;i++){
    //     cout<<arr[i].val<<" "<<arr[i].index<<endl;
    // }
    int flag=0;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k && flag==0){
            long long int sum = arr[i].val+arr[j].val+arr[k].val;
            if(sum==x){
                flag=1;
                cout<<arr[i].index<<" "<<arr[j].index<<" "<<arr[k].index<<endl;
                break;
            }
            else if(sum>x){
                k--;
            }
            else{
                j++;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
}