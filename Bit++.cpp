#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    int ans=0;

    while(n--){
        string s;
        cin>>s;
        if(s.find('+')!=-1)ans++;
        else ans--;
        //9cin.ignore();
    }
       cout<<ans;

    return 0;
}