#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    int target = arr[k-1];
    // target>0
    reverse(arr,arr+n);
    if(target>0){
        ans = lower_bound(arr, arr+n, target)-arr;
    }else if(target==0){
        ans=upper_bound(arr,arr+n,0)-arr;
    }
    if(arr[n-1]>0)
        cout<<(n-ans);
    else cout<<0;


    return 0;
}