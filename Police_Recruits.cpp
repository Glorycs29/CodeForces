#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int total=0,ans=0;

    while(n--){
        int temp;
        cin>>temp;
        if(temp==-1){
            if(!total) ans++;
            else total--;
        }else{
            total+=temp;
        }
           
    }
    cout<<ans;

}