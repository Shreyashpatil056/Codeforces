// this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
// this code belongs to Shreyash Shriram Patil
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
// this code belongs to Shreyash Shriram Patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void pf(ll n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n = n/2;
	}

    cout<<n<<"->n";
	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			cout << i << " ";
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		cout << n << " ";
}

bool primeFactors(v64 v, ll n)
{
    ll i = 2;
    while (n % i == 0)
    {
        n /= i;
        v.pb(i);
    }
    // i++;
    // cout<<n<<"->n";
    for (i=3; i <= sqrt(n); i+=2)
    {
        while (n % i == 0)
        {
            v.pb(i);
            n /= i;
        }
    }
    if(n>2) v.pb(n);
    // cout<<"n->"<<n<<endl;
    // v.erase(unique(v.begin(), v.end()), v.end());
    n = v.size();
    
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    
    if(n <= 2){
        cout<<2<<endl;
        return true;
    }
    //2 3 5
    cout<<1<<endl;
    cout<<v[0]*v[1]<<endl;
    return true;
}

bool isprime(ll n)
{
    if(n<=1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
  
    return true;
}

void shreyu()
{
    ll n;
    cin >> n;   
    
    // pf(6);
    
    if(n==1 || isprime(n))
    {
        cout<<1<<endl;
        cout<<0<<endl;
        return;
    }

    v64 v;

    if(primeFactors(v,n)) return;
   
}   
int main()
{
    fast_cin();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        shreyu();
    }
    return 0;
}