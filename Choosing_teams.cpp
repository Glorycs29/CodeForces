#include<bits/stdc++.h>
using namespace std;


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        if(5-a[i]>=k)
            cnt++;
    int ans=cnt/3;
    cout<<ans;
}