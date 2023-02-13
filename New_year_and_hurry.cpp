#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n,k;
    cin>>n>>k;
    int remaning=240-k;
    int count=0;

    for(int i=1;i<=n;i++){
        if(remaning>=i*5){
            remaning-=i*5;
            ++count;
        }else{
            break;
        }
    }
    cout<<count;
}