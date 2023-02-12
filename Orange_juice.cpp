#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    long double p[n];
    long double ans =0;
    for(auto x:p){
        cin>>x;
        ans+=x;
    }
    cout<<ans/n;

    return 0;
}