#include<bits/stdc++.h>
using namespace std;
#define int long long

bool prime(int sr){
    if(sr==1)return false;
    for(int i=2;i*i<=sr;i++){
        if(sr%i==0)return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sr = sqrt(n);
        if(sr*sr==n && prime(sr))cout<<"YES\n";
        else cout<<"NO\n";
        //cout<<(sr*sr==n);
    }
    
}