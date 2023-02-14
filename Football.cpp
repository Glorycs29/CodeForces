#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    cin>>s;
    int n=s.length();
    if(n<7){
        cout<<"NO";

    }else{
        int start=0,end=start+6;
        while(end<n){
            //count ones
            //cout<<"start : "<<start<<" end : "<<end<<"\n";
            int ones=count(s.begin()+start, s.begin()+end+1,'1');
            //cout<<"ones : "<<ones<<'\n';
            if(ones==0 || ones==7){
                cout<<"YES";
                return 0;
            }else{
                start++;
                end++;
            }
        }
        cout<<"NO";
    }


}