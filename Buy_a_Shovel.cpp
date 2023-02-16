#include<bits/stdc++.h>
using namespace std;

signed main(){
    int k,r,ans;
    cin>>k>>r;
        for(int i=1;i<=9;i++){
            if((i*k)%10==0 || (i*k)%10==r){
                ans=i;
                cout<<ans;
                return 0;
            }
            //ans=i;
        }
    
    //cout<<ans;
}