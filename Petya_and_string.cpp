#include<bits/stdc++.h>
using namespace std;

int cmp(string &a, string &b){
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        return a.compare(b);
}

int32_t main(){

    string a,b;
    cin>>a>>b;
    int res = cmp(a,b);
    cout<<res;
    return 0;
}