#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,sum=0,count=0,ans_sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n);
    for(int i=n-1;i>=0;i--){
        
        if(ans_sum>sum/2){
           break;  
        }
        else{
            count++;
            ans_sum+=arr[i];
            //cout<<i<<" : "<<"sum : "<<ans_sum<<" : "<<count<<"\n";
        }
    }
    cout<<count;
}