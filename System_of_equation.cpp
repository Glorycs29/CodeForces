#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int i,a,b,n,m,count=0;
    cin >> n >> m;
    for(i=0; i*i<=n; i++)
    {
        b = n-i*i;
        a = m-b*b;
        if(a>=0 && a*a+b==n)
            count++;
    }
    cout << count << endl;

}