#include<bits/stdc++.h>
using namespace std;
int n,i,arr[8];
signed main(){
    for(cin>>n;cin>>arr[i++];);
    while(n>0)for(i=0;i<8 && n>0;i++) n-=arr[i];
    cout<<i;
}