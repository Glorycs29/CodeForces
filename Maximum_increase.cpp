#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    long long n,count=1,maxi=1;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>arr[i-1]){
            count++;
            maxi = max(maxi, count);
        }else{
            count=1;
        }
    }
    cout<<maxi;

    return 0;
}