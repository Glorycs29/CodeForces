#include<bits/stdc++.h>
using namespace std;


signed main(){
    int n,x[300],y[300], u, l, r, d, ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        d=u=r=l=0;
        for(int j=0;j<n;j++){
            if(x[i]==x[j] && y[i]<y[j]){
                d=1;
            }if(x[i]==x[j] && y[i]>y[j]){
                u=1;
            }if(x[i]<x[j] && y[i]==y[j]){
                l=1;
            }if(x[i]>x[j] && y[i]==y[j]){
                r=1;
            }
        }
        if(u+d+l+r==4)ans++;
    }
    cout<<ans;
    
}