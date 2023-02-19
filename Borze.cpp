#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-' && s[i+1]=='.'){
            cout<<1; i++;        
        }else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2; i++;
        }else 
            if(s[i]=='.')cout<<0;
    }

}