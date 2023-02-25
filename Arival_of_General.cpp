#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a,x,y=100,b,c;
    // mujhe smjh nhi aaya... agar kisi ko aaye to bta do
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>x){x=a, b=i; 
        //cout<<"ye rha apka x : "<<x<<" aur ye rha apka b: "<<b<<"\n";
        }
        if(a<=y){y=a, c=i;
        //cout<<"ye rha apka y : "<<y<<" aur ye rha apka c: "<<c<<"\n";
        }
    }
    cout<<b+n-c-1-(c<b);
}
