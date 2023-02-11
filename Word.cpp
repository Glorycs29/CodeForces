#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    string s;
    cin>>s;
    int lowercase=0, uppercase=0;
    for(auto x:s){
        if(x>='A' && x<='Z'){
            uppercase++;
        }else{
            lowercase++;
        }
    }
    
        if(lowercase<uppercase){
            transform(s.begin(), s.end(), s.begin(), ::toupper);

        }else{
            transform(s.begin(), s.end(), s.begin(), ::tolower);

        }
    cout<<s;
    return 0;
}