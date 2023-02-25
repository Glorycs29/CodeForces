#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ts; cin>>ts;
    while(ts--){
        int n; cin>>n;
        vector<int> ans;
        int power=1;
        while(n>0){
            if(n%10>0){
                ans.push_back((n%10)*power);
            }
            n/=10;
            power*=10;
        }
        cout<<ans.size()<<'\n';
        for(auto num:ans){
            cout<<num<<" ";
        }
        cout<<'\n';
    }

}