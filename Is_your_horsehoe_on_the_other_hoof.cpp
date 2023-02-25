#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=4;
    set<int> s;
    while(n--){
        int x; cin>>x;
        s.insert(x);
    }
    int ans = 4-s.size();
    cout<<ans;
}