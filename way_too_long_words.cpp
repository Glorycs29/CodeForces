#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
        int size = words[i].size();
        if(size>10){
            string new_st = words[i][0]+ to_string(size-2) + words[i][size-1];
            words[i]=new_st;

        }
    }
    for(string s:words){
        cout<<s<<"\n";
    }


    return 0;
}