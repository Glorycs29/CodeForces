#include<bits/stdc++.h>
using namespace std;

signed main(){

    string s,t;
    t="hello"; // size=5;
    cin>>s;
    int n=s.size();
    int i=0,j=0;
    for(i=0;i<n;i++){
        if(s[i]==t[j]){
            j++;
        }
    }
    if(j>=5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}