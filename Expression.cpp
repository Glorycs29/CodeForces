#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==1 && b==1 && c==1){
        cout<<a+b+c;
    }else if(a==1 && c==1){
        cout<<a+b+c;
    }else if(a==1){
        cout<<(a+b)*c;
    }else if(b==1){
        cout<<(min(a,c)+1)*max(a,c);
    }else if(c==1){
        cout<<(c+b)*a;
    }else{
        cout<<a*b*c;
    }
}