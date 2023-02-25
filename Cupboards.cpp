#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        int n; cin>>n;
        int  left=0, right=0;
        for(int i=0;i<n;i++){
            int x,y; cin>>x>>y;
            left+=x; right+=y;  
        }
        int x=min(n-left,left);
        int y=min(n-right,right);
        cout<<x+y;
}
