#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pos[100001]={-1};
signed main(){
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++){
        int nums; cin>>nums;
        pos[nums]=i+1;
    }
    ll sum1=0, sum2=0;
    cin>>m;
    for(int i=0; i<m; i++){
        int q; cin>>q;
        sum1+= pos[q];
        sum2+= n-pos[q]+1;
    }
    cout<<sum1<<" "<<sum2;
}