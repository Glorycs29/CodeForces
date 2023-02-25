#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n,f,s=0;
    cin>>n; f=n-1;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++){
        if(abs(arr[f]-arr[s])>abs(arr[i]-arr[i+1])) f=i, s=i+1;
    }
    cout<<f+1<<" "<<s+1;

}