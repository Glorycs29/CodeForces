#include<bits/stdc++.h>
using namespace std;

signed main(){
    unordered_map<string,int> mp;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end()){
            // found it
            string x;
            int count=mp[s];
            x=s+to_string(count);
            mp[s]++;
            cout<<x<<'\n';
            // mp[s]++;
        }else{
            cout<<"OK\n";
            mp[s]=1;
        }
        
    }
}