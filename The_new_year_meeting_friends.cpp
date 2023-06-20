#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    
    int ans  = max({x1,x2,x3})- min({x1,x2,x3});
    cout<<ans;

    return 0;
}