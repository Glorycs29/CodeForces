// serval; and mocha's arrAY

#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define dl double long
#define pb(x) push_back(x)
// #define forall(i,n) for(int i=0;i<n;i++)
// #define for(i,n) for(int i=1;i<n;i++)
// #define foreach(x,arr) for(auto x: arr)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);

signed main(){

    fast;
    int ts; cin>>ts;
    while(ts--){

        int n; cin>>n;
        string s,rev_s; cin>>s;
        rev_s=s;
        reverse(rev_s.begin(), rev_s.end());
        if(rev_s==s) cout<<"YES\n"; 
        else{
            int start=0,end=n-1;

            while(start<=end){
                if(s[start]==s[end]){
                    start++; end--;
                }else break;
            }
            while(start<=end){
                if(s[start]!=s[end]){
                    s[start]=s[end]; start++; end--;
                }else break;
            }
                rev_s=s;
                reverse(rev_s.begin(), rev_s.end());
                if(s==rev_s)cout<<"YES\n";
                else cout<<"NO\n";
        }

    }
}
/*
6
2
3 6
3
1 2 4
3
3 6 1
3
15 35 21
4
35 10 35 14
5
1261 227821 143 4171 1941
*/

