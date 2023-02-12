#include<bits/stdc++.h>
using namespace std;
bool isdiff(int n){
    string s=to_string(n);
    int dig1=count(s.begin(), s.end(), s[0]);
    int dig2=count(s.begin(), s.end(), s[1]);
    int dig3=count(s.begin(), s.end(), s[2]);
    int dig4=count(s.begin(), s.end(), s[3]);
    if((dig1==1) && (dig2==1) && (dig3==1) && (dig4==1)) return 1;
    return 0;
}

int32_t main(){
    int n;
    cin>>n;
    ++n;
    while(!isdiff(n))n++;
    cout<<n;

    return 0;
}