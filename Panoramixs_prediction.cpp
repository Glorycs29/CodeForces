#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i*i <=n; i++)
        if (n % i == 0)
            return false;
    return true;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x=0; cin>>n>>m;
   for(int i=n+1;i<=m;i++)
    {
        if(isPrime(i)) {
            x = i;
            break;
        }
    }
    if(x==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";


}