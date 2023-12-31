//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
//this code belongs to Shreyash Shriram Patil
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to Shreyash Shriram Patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

 void shreyu(){
    ll n,k,c=0;
    cin>>n>>k;
    
    ll p = n / k;
    ll r = p % 10;
    ll q = p/10;

    ll arr[10];
    ll sum=0;
    for(ll i=1;i<=10;i++){
        arr[i-1] = (i*(k%10))%10;
        sum+=arr[i-1];
    }

    c = q*sum;

    while(r--){
        c+=arr[r];
    }



    cout<<c<<ln;

    //100/3 = 33
    //1 2 3 4 5 6 7 8 9 0 = 45 * 1 = 45 + 1 + 2 + 3 = 51
    //2 4 6 8 0 2 4 6 8 0 = 20 * 2 = 40 + 2 + 4 + 6 = 52
    //3 6 9 2 5 8 1 4 7 0 = 45 * 3 = 135 + 3 + 6 + 9 = 153
    //4 8 2 6 0 4 8 2 6 0 = 40 * 4 = 160 + 4 + 8 + 2 = 174
    //5 0 5 0 5 0 5 0 5 0 = 25 * 5 = 125 + 5 + 0 + 5 = 130
    //6 2 8 4 0 6 2 8 4 0 = 40 * 6 = 240 + 6 + 2 + 8 = 266
    //7 4 1 8 5 2 9 6 3 0 = 45 * 7 = 315 + 7 + 4 + 1 = 327
    //8 6 4 2 0 8 6 4 2 0 = 40 * 8 = 320 + 8 + 6 + 4 = 338
    //9 8 7 6 5 4 3 2 1 0 = 45 * 9 = 405 + 9 + 8 + 7 = 429

    
    
    
    
 }
 int main()
 {
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        shreyu();
    }
    return 0;
 }