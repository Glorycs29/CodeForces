#include<bits/stdc++.h>
using namespace std;

signed main(){
    string sample,target; cin>>sample>>target;
    int n=sample.length(), l=0, mid=n/2;
    while(l<mid){
        swap(sample[l], sample[n-l-1]);
            l++;
    }
    if(sample==target){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
