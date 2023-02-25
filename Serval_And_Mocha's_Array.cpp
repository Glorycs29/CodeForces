// serval; and mocha's arrAY

#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define dl double long
#define pb(x) push_back(x)
// #define forall(i,n) for(int i=0;i<n;i++)
// #define for(i,n) for(int i=1;i<n;i++)
// #define foreach(x,arr) for(auto x: arr)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);

signed main(){

    fast;
    int ts; cin>>ts;
    while(ts--){

    int n; cin>>n;

    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    //reorder
    //sort(arr,arr+n);
    int num=1000000;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        
            num= min(num,(__gcd(arr[i],arr[j])));
        }
    }
    if(num<=2)cout<<"YES\n";
    else cout<<"NO\n";

    }
}
/*
6
2
3 6
3
1 2 4
3
3 6 1
3
15 35 21
4
35 10 35 14
5
1261 227821 143 4171 1941
*/

