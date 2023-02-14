#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
            break;
        }
    }
    if(count>0)cout<<"HARD";
    else cout<<"EASY";

}