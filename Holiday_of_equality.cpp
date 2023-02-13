#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    int arr[n];
    int maxi=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(arr[i],maxi);
    }
    for(int i=0;i<n;i++){
        ans+=maxi-arr[i];
    }
    cout<<ans;

    return 0;
}