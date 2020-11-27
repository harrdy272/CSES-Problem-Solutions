#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int lli;

struct book{
    lli tm;
    lli ind;
};

bool cmp1(book a, book b){
    return a.tm>b.tm;
}

bool cmp2(book a, book b){
    return a.tm<b.tm;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    book brr[n];
    lli sum=0;
    rep(i,0,n)
    {
        cin>>brr[i].tm;
        sum+=brr[i].tm;
        brr[i].ind=i;
    }
    sort(brr,brr+n,cmp2);
    cout<<std::max(2*brr[n-1].tm, sum);


}