#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s1,s2,ans;
    cin>>s1>>s2;
    int len=s2.length();
    for(int i=0;i<len;i++){
        if(s1[i]!=s2[i]){
            ans+='1';
        }else ans+='0';
    }
    cout<<ans;
    return 0;
}