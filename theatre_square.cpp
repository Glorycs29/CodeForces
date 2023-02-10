#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    unsigned long long n,m,a;
    cin>>n>>m>>a;
    
    unsigned long long val= ceil((double)n/a)*ceil((double)m/a);
    cout<<val;

    return 0;
}