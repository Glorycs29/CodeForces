#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    long long int a,b;
    cin>>a>>b;
    long long int count=0;
    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count;

    return 0;
}