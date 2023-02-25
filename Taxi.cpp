#include<iostream>
using namespace std;
int n,t;
int a[5];
int main()
{
	cin>>n;
	while(n--)
		cin>>t,a[t]++;
	cout << a[4]+a[3]+(a[2]*2+max(a[1]-a[3],0)+3)/4;
}
