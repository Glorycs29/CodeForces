#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

int recurse(int n, int a, int b, int c){
    if(n==0)return 0;
    if(n<0)return INT_MIN;
    if(mp.count(n)) return mp[n];
    return mp[n] = 1+max({recurse(n-a,a,b,c), recurse(n-b,a,b,c), recurse(n-c,a,b,c)});
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<recurse(n,a,b,c);
    
}