#include<bits/stdc++.h>
using namespace std;

struct movie{
    long long int arr;
    long long int end;
};

bool cmp(movie a, movie b){
    return a.end<b.end;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    movie arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].arr>>arr[i].end;
    }
    sort(arr,arr+n,cmp);
    long long int st=arr[0].arr;
    long long int fin = arr[0].end;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i].arr>=fin){
            count++;
            st=arr[i].arr;
            fin = arr[i].end;
        }
    }
    cout<<count<<endl;

}