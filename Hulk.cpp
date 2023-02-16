#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n;
    cin>>n;
    string s1,s2,s3,s4,ans="";
    s1="I hate it";
    s2="I love it";
    s3="I hate that";
    s4="I love that";

    //if(n==1) ans=s1;
    if(n%2==0){
        // last statement will be s2
        n= (n-2)/2;
        while(n--){
        ans+=s3+" "+s4+" ";
        }
        ans+=s3+ " "+s2;
    }else{
        //last statement s1
        n=(n-1)/2;
        while(n--){
            ans+=s3+" "+s4+" ";
        }
        ans+=s1;
    }
    cout<<ans;

}