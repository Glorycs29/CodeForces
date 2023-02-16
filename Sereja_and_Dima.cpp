#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sereja=0,dima=0;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){

            if(v[r]>v[l]){
                sereja+=v[r--];
            }else{
                sereja+=v[l++];
            }
        }else{

            if(v[r]>v[l]){
                dima+=v[r--];
            }else{
                dima+=v[l++];
            }
        }
    }
    cout<<sereja<<" "<<dima;

}