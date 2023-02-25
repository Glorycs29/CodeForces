#include<bits/stdc++.h>
using namespace std;

signed main(){
    int k, counter=0,sum=0; cin>>k;
    int arr[12]; for(int i=0;i<12;i++)cin>>arr[i];
    sort(arr,arr+12);
    for(int i=11; i>=0 && sum<k;i--){
        if(sum>=k)break;
        sum+=arr[i];
        if(i==0 && sum<k){
            counter=-1; break;
        }
        //cout<<i<<" sum= "<<sum<<"\n";
        counter++;
    }
    cout<<counter;

}