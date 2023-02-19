#include<bits/stdc++.h>
using namespace std;
#define int long long
// #define dl double long
// #define pb(x) push_back(x)
// #define forall(i,n) for(int i=0;i<n;i++)
// #define for(i,n) for(int i=1;i<n;i++)
// #define foreach(x,arr) for(auto x: arr)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);

signed main(){
    
    fast;
    int n,counter=0;
    cin>>n;
    unordered_map<string,int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    //mp["Tetrahedron"]=4;

    for(int i=0;i<n;i++){
    string s;
    cin>>s;
    counter+= mp[s];
    //cout<<"for i :"<<i<<" counter : "<<counter<<'\n';
    }
    cout<<counter<<'\n';
}
