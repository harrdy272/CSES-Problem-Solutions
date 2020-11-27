#include<bits/stdc++.h>
using namespace std;

bool findFourElements(long long int arr[], int n, long long int X) 
{ 
	// Store sums of all pairs 
	// in a hash table 
	map<long long int, pair<int, int> > mp; 
    //mp.reserve(1<<20);
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			mp[arr[i] + arr[j]] = { i, j }; 

	// Traverse through all pairs and search 
	// for X - (current pair sum). 
	for (int i = 0; i < n - 1; i++) { 
		for (int j = i + 1; j < n; j++) { 
			long long int sum = arr[i] + arr[j]; 

			// If X - sum is present in hash table, 
			if (mp.find(X - sum) != mp.end()) { 

				// Making sure that all elements are 
				// distinct array elements and an element 
				// is not considered more than once. 
				pair<int, int> p = mp[X - sum]; 
				if (p.first != i && p.first != j 
					&& p.second != i && p.second != j) { 
					cout << i+1 << " " << j+1 << " "
						<< p.first+1 << " "
						<< p.second+1; 
					return true; 
				} 
			} 
		} 
	}
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int x;
    cin>>x;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(!findFourElements(arr,n,x)){
        cout<<"IMPOSSIBLE"<<endl;
    }
    // unordered_map<long long int, pair<int,int>> m;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         long long int sum = (arr[i]+arr[j]);
    //         m[sum] = {i,j};
    //     }
    // }
    // int flag=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         long long int sum = (arr[i]+arr[j]);
    //         if(sum<x){
    //             auto it = m.find(x-sum);
    //             if(it!=m.end()){
    //                 pair<int,int> temp = it->second;
    //                 if(temp.first != i && temp.second != i && temp.second != j && temp.first != j){
    //                     flag=1;
    //                     cout<<i+1<<" "<<j+1<<" "<<temp.second+1<<" "<<temp.first+1<<endl;
    //                     break;
    //                 }
    //             }
    //             if(flag==1){
    //                 break;
    //             }
    //         }
    //         if(flag==1){
    //             break;
    //         }
    //     }
    //     if(flag==1){
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"IMPOSSIBLE"<<endl;
    // }
    
}