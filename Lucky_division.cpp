#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    bool flag=false;
    int lucky[12]={4,7,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<12;i++){
        if(n%lucky[i]==0){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    }