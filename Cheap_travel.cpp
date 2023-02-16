#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n<=m){
        cout<<min(b,a*n);
        return 0;
    }else{
    // two case if it takes less amount by 'a' type tickets OR 'b' type special ticket
    int ans,mini=0,temp,rem=0;
    mini=n*a;
    temp=n/m; rem=n%m; // no choice but to take 'a' tickets
    ans=temp*b+ min(rem*a,b);
    mini=min(mini,ans);
    cout<<mini;
    }
}