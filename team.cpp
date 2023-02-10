#include<bits/stdc++.h>
using namespace std;


int32_t main(){
    
    int n;
    cin>>n;
    vector<vector<int>> team(n,vector<int>(3));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>team[i][j];  
        }
        if(team[i][0]+team[i][1]+team[i][2]>=2){
                count++;
            }
    }
    cout<<count<<"\n";

    return 0;
}