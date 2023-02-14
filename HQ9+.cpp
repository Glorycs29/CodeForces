#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s,t;
    t="HQ9";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){

        if(t.find(s[i])!=-1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}