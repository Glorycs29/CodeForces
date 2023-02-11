#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,s2;
    cin>>s;
    int size=s.size();
    
    for(int i=0;i<size;i++){
        if(s[i]!='+')
        s2+=s[i];
        
    }
    int len=s2.length();
    sort(s2.begin(),s2.end());
    if(len>1){
        cout<<s2[0];
    
    for(int i=1;i<len-1;i++){
        cout<<"+"<<s2[i];
    }
    cout<<"+"<<s2[len-1];
    }
    else{
        cout<<s;
    }


    return 0;
}