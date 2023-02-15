#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi=arr[0], mini=arr[0], prev_max=arr[0], prev_min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            // can be minimum
            mini=min(mini,arr[i]);
            if(mini<prev_min){
                count++;
                prev_min=mini;
            }
        }else{
            maxi=max(maxi,arr[i]);
            if(maxi>prev_max){
                count++;
                prev_max=maxi;
            }
        }
    }
    cout<<count;
}