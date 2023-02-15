#include<bits/stdc++.h>
using namespace std;
#define int long long
#define dl double long
#define pb(x) push_back(x)
// #define forall(i,n) for(int i=0;i<n;i++)
// #define for(i,n) for(int i=1;i<n;i++)
// #define foreach(x,arr) for(auto x: arr)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);


signed main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int flag=-1;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i] > 1){
                flag=1;
                //cout<<"HELLO";           
            }
        }
        if(flag==1)cout<<"NO\n";
        else cout<<"YES\n";
    }

}