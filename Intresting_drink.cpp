#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n,q;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    cin>>q;
    while(q--){
        int coin;
        cin>>coin;
        int x = upper_bound(v.begin(),v.end(),coin)-v.begin();
        cout<<x<<'\n';
    }

    return 0;
}