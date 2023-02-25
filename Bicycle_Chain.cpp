#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[55],b,d,l;
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
cin>>m;
while(m--){
    cin>>b;
    for(int j=0;j<n;j++)
        if(b%a[j]==0)l=b/a[j],l>k?k=l,d=1:l==k?d++:0;
}
cout<<d;
}
