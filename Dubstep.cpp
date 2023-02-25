#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s1,s2;
    cin>>s1;
    while(s1.find("WUB")!=-1){
        int x=s1.find("WUB");
        if(x==0){
            s1.erase(0,3);
        }
        else{
        s1.replace(x,1," ");
        s1.erase(x+1,2);
        }
    }
    cout<<s1;
    
}










