#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s;
    cin>>s;
    set<char> st;
    for(auto x:s){
        st.insert(x);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}