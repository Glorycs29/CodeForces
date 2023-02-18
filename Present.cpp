#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr1[101], arr2[101];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        arr2[arr1[j]]=j+1;
    }
    for(int x=1;x<=n;x++){
        cout<<arr2[x]<<" ";
    }
}





