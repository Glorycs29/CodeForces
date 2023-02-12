#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,d=0;
    a = count(s.begin(),s.end(), 'A');
    d = count(s.begin(),s.end(), 'D');
    if(a>d)cout<<"Anton";
    if(a<d)cout<<"Danik";
    if(a==d)cout<<"Friendship";
    return 0;
}