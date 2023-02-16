#include<bits/stdc++.h>
using namespace std;
#define int long long
// #define dl double long
// #define pb(x) push_back(x)
// #define forall(i,n) for(int i=0;i<n;i++)
// #define for(i,n) for(int i=1;i<n;i++)
// #define foreach(x,arr) for(auto x: arr)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);

// int M=1000000007l;
// bool primes[1000001];

// int maxN=200005;
// int fact[200005];

/*vector<int> res;
int n=0;
    
int power(long long x, unsigned int y, int p)
{
    int res = 1; 
    x = x % p; 
    
    if (x == 0) return 0; 
    
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
    
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
    
bool miillerTest(int d, int n)
{
    
    int a = 2 + rand() % (n - 4);
    
    int x = power(a, d, n);
    
    if (x == 1  || x == n-1)
        return true;
    
    
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
    
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    
    return false;
}
    
bool isPrime(int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    
    for (int i = 0; i < k; i++)
            if (!miillerTest(d, n))
                return false;
    
    return true;
}
    
vector<int> primesieve(){
    int n=1000001;
    
    for(int i=2;i*i<n;i++){
        if(!primes[i]){
            for(int j=2*i;j<n;j+=i){
                primes[j]=true;
            }
        }
    }
    
    vector<int> prime;
    for(int i=2;i<n;i++){
        if(!primes[i]){
            prime.push_back(i);
        }
    }
    return prime;
}
    
vector<int> getNumberOfFactor(int n,vector<int> prime){
    vector<int> ans;
    int res=0;
    for (int i : prime) {
        if (i * i > n) {
            break;
        }
        if(n%i==0){
            ans.push_back(i);
        }
        while (n % i == 0) {
            n /= i;
            res++;
        }
    }
    if (n > 1) {
        res++;
        ans.push_back(n);
    }
    return ans;
}
    
bool knapsack1(vector<int> arr,int size){
    bitset<200005> b[2];
    b[0][0]=1;
    int sum=0;
    int n=arr.size();
    
    for(int i=1;i<=size;i++){
        b[1]=b[0];
        b[0]<<=arr[i-1];
        b[1] |= b[0];
        b[0]=b[1];
        sum+=arr[i-1];
    }
    
    return b[1][sum/2]==1;
}
    
int C(int n,int r,int P){
    int num=fact[n];
    int den=power(fact[r],P-2,P)%P;
    den=(den*power(fact[n-r],P-2,P))%P;
    return (num%P*den%P)%P;
}

void printVector(vector<int>& v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int count(int x){
    int ans=0;
    while(x > 0){
        x^=(x&(-x));
        ans++;
    }
    return ans;
}

void printX(auto v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}

vector<int> getFactors(int n)
{
    vector<int> ans;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if (n/i == i)
                ans.push_back(i);
            else {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}


class DSU
{
	private:
	vector<int> par, sz;

    public:
    int connected;
	DSU(int n) 
	{
		par = sz = vector<int> (n + 1, 0);
		for(int i = 1; i <= n; i++)
			par[i] = i, sz[i] = 1;

		connected = n;
	}

	int find(int u)
	{
		while(u != par[u])
		{
			par[u] = par[par[u]];
			u = par[u];
		}
		return u;
	}

	int getSize(int u)
	{
		return sz[find(u)];
	}

	void join(int u, int v)
	{
		int par1 = find(u), par2 = find(v);

		if(par1 == par2)
			return;

		connected--;

		if(sz[par1] > sz[par2])
			swap(par1, par2);

		sz[par2] += sz[par1];
		sz[par1] = 0;
		par[par1] = par[par2];
	}
};

int isPossible(vector<int>& arr,int x,int k){
    return 0;
}

void solve_(int testCase){
    //cout<<"Case #"<<testCase<<": ";
    int n,ans=INT_MAX,order=0,k;
    cin>>n>>k;

    vector<int> arr(n,0),pref(n+1,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pref[i+1]=arr[i];
        pref[i+1]=(pref[i+1]+pref[i])%k;
    }
    
    for(int i=0;i<=n;i++){
        pref[i]=pref[i]%k;
    }
    map<int,vector<int>> freq;
    bool flag=false;

    for(int i=0;i<=n;i++){
        if(freq.find(pref[i]) != freq.end()){
            for(int q: freq[pref[i]]){
                int front=q;
                int back=n-i;
    
                if( (front&back)==front ){
                    flag=true;
                    ans=min(ans, __builtin_popcountll(front) + __builtin_popcountll(back-front)+0ll);
                    break;
                }
            }
        }
        freq[pref[i]].push_back(i);
    }
    if(!flag){
        cout<<"-1\n";
    }else{
        cout<<ans<<"\n";
    }
}
*/
signed main(){
    fast;
    int ts;
    cin>>ts;
    while(ts--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n,vector<int>(2));
        
        int cnt1=0,cnt2=0;

        for(int i=0;i<n;i++){
            cin>>v[i][0]>>v[i][1];
            if(v[i][0]==k)cnt1++;
            if(v[i][1]==k)cnt2++;    
        }

        if(cnt1>0 && cnt2>0)cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';

    }
}
