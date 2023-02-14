#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int arr[n];
    int odd_idx=0,even_idx=0,count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1!=0){
            odd_idx=i;
            //cout<<"odd idx:"<<i<<'\n';
            count++;
        }else{
            even_idx=i;
            //cout<<"even idx:"<<i<<'\n';
        }
    }
    if(count>1)cout<<even_idx+1;
    else cout<<odd_idx+1;
    
}