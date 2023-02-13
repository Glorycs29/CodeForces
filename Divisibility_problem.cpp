#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%b==0)cout<<0<<"\n";
        else{
            int rem = a%b;
            cout<<b-rem<<'\n';
        }
    }
    return 0;

}