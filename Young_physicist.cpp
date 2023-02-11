#include <bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3));
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
        x+=v[i][0];
        y+=v[i][1];
        z+=v[i][2];
    }
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";

    return 0;

}