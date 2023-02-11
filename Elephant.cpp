#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int des;
    cin>>des;

    int steps=0;

    if(des<5){
        steps=1;
    }else{
        if(des%5==0){
            steps+=des/5;
        }else{
            steps+=des/5+1;
        }
    }
       cout<<steps;

    return 0;
}