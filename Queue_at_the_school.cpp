#include<bits/stdc++.h>
using namespace std;


int32_t main(){

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=0; i<n-1; i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
            if(s[i]=='G')continue;
            
        }
    }
    cout<<s;
    return 0;
}