#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n,h;
    cin>>n>>h;
    int width;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>h){
            width+=2;
        }else{
            width+=1;
        }
    }
    cout<<width;
    return 0;
}