#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,m,a,ans,mx=0; 
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>a;
        if((a-1)/m>=mx){
            mx=(a-1)/m;
            ans=i;
        }
    }
    cout<<ans+1;
}