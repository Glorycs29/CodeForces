#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define int long long


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    //check for dis from 0---to--first lantern
    // similarly check for last lantern to end idx 
    // and also iterate and maintain the max_dis b/w lantern ... return max if start and end is present 
    // else the max_dis/2

    ld start = arr[0]-0;
    ld end = l-arr[n-1];
    end=2*max(end,start);

    for(int i=0;i<n-1;i++){
        ld dis=arr[i+1]-arr[i];
        end = max(end,dis);
    }
    end=end*1.0f;
    cout<<fixed<<setprecision(10)<<end/2;
}