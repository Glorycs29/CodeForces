#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    int count=1;
    for(int i=1;i<n;i++){
        cin>>s2;
        if(s1[0]==s2[1])count++;
        s1=s2;
    }
    cout<<count;
    return 0;
}