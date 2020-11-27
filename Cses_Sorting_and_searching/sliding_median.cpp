#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

// void min_heapify(int arr[], int i, int n){
//     int sm = i;
//     int left = 2*i+1;
//     int right = 2*i+2;
//     if(left<n && arr[left]<arr[sm]){
//         sm=left;
//     }
//     if(right<n && arr[right]<arr[sm]){
//         sm=right;
//     }
//     if(i!=sm){
//         arr[i] = arr[i]^arr[sm];
//         arr[sm] = arr[i]^arr[sm];
//         arr[i] = arr[i]^arr[sm];
//         min_heapify(arr,sm,n);
//     }
// }

// void max_heapify(int arr[], int i, int n){
//     int lg = i;
//     int left = 2*i+1;
//     int right = 2*i+2;
//     if(left<n && arr[left]>arr[lg]){
//         lg=left;
//     }
//     if(right<n && arr[right]>arr[lg]){
//         lg=right;
//     }
//     if(i!=lg){
//         arr[i] = arr[i]^arr[lg];
//         arr[lg] = arr[i]^arr[lg];
//         arr[i] = arr[i]^arr[lg];
//         max_heapify(arr,lg,n);
//     }
// }

// void buildminheap(int arr[], int n){
//     for(int i=n/2-1;i>=0;i--){
//         min_heapify(arr,i,n);
//     }
// }
// void buildmaxheap(int arr[], int n){
//     for(int i=n/2-1;i>=0;i--){
//         max_heapify(arr,i,n);
//     }
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,k;
    cin>>n>>k;
    lli arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0]<<endl;
    }
    else if(n==2){
        cout<<std::min(arr[0],arr[1])<<endl;
    }
    else if(k==1){
        for(lli i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(k==2){
        for(lli i=1;i<n;i++){
            cout<<std::min(arr[i], arr[i-1])<<" ";
        }
        cout<<endl;
    }
    else{
        for(lli i=0;i<n-k+1;i++){
            priority_queue<lli> maxh;
            priority_queue<lli, vector<lli>, greater<lli>> minh;
            lli maxx = std::max(arr[i], arr[i+1]);
            lli minn = std::min(arr[i], arr[i+1]);
            maxh.push(minn);
            minh.push(maxx);
            for(lli j=i+2;j<i+k;j++){
                if(arr[j]>minh.top()){
                    minh.push(arr[j]);
                }
                else{
                    maxh.push(arr[j]);
                }
                lli a1 = maxh.size();
                lli a2 = minh.size();
                if((a2-a1)>=2){
                    lli p = minh.top();
                    minh.pop();
                    maxh.push(p);
                }
                if((a1-a2)>=2){
                    lli p = maxh.top();
                    maxh.pop();
                    minh.push(p);
                }

            }
            if(maxh.size()==minh.size()){
                cout<<std::min(maxh.top(), minh.top())<<" ";
            }
            else if(maxh.size()>minh.size()){
                cout<<maxh.top()<<" ";
            }
            else{
                cout<<minh.top()<<" ";
            }
        }
    }
}