#include<bits/stdc++.h>
using namespace std;


signed main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    unordered_map<char,int> target,mp;
    //cout<<"Before combining : "<<s1<<'\n';
    s1+=s2;
    //cout<<"After combining : "<<s1<<'\n';
    int len=s1.length();
    for(int i=0;i<len;i++){
        target[s1[i]]++;
    }
    for(int i=0;i<s3.length();i++){
        mp[s3[i]]++;
    }
    if(target==mp)cout<<"YES";
    else cout<<"NO";
}