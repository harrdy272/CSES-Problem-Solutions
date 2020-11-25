#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<s.length();i++){
        arr[s[i]-'A']++;
    }
    int count=0;
    char brr[s.length()];
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    if(count>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        int flag=0;
        int i=0,j=s.length()-1;
        while(flag==0){
            int max_val=0, index;
            for(int i=0;i<26;i++){
                if(arr[i]>max_val){
                    max_val=arr[i];
                    index = i;
                }
            }
            if(max_val==0){
                flag=1;
            }
            else{
                brr[i]=index+'A';
                brr[j]=index+'A';
                i++;
                j--;
                arr[index] -= 2;
            }
            
        }
    }
    for(char x: brr){
        cout<<x;
    }
    cout<<endl;
}