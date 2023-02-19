#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin>>t; 
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n); // val,idx
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v[i]={x,i};
        }
        sort(v.begin(),v.end());
        int first=v[0].first, last=v[n-1].first, second=v[1].first;
        if(first==second){
            cout<<(v[n-1].second+1)<<'\n';
        }else{
            cout<<(v[0].second+1)<<'\n';
        }
    }

}