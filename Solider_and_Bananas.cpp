#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int k,n,w; // k--> constant amount // n--> money he have // w--> bananas 
    cin>>k>>n>>w;
    int money_required=k*(w)*(w+1)/2;
    int borrow = money_required-n;
    if(borrow<=0)cout<<0;
    else cout<<borrow;

    return 0;
}