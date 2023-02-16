#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,m;
    cin>>n>>m;

    if(min(n,m)%2==0 && n*m!=2){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
}