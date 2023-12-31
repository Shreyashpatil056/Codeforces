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
    ll n, s; 
    cin>>n>>s;

    v64 v;

//4! = 2!*2!
//6! = 6,5,4,3,2 = 3,2 ,, 5 = 3!*5!
//8! = 2!*2!*2!*7*
//9! = 

    while(s>0){
        ll rem = s%10;
        s/=10;
        if(rem == 1) continue;
        if(rem == 2 || rem == 3 || rem == 5 || rem == 7 ) v.pb(rem);
        if(rem == 4) {
            v.pb(2);
            v.pb(2);
            v.pb(3);
        }
        if(rem == 6) {
            v.pb(5);
            v.pb(3);
        }
        if(rem == 8){
            v.pb(2);
            v.pb(2);
            v.pb(2);
            v.pb(7);
        }
        if(rem == 9){
            v.pb(3);
            v.pb(3);
            v.pb(2);
            v.pb(7);
        }

        
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    
    
    
 }
 int main()
 {
    fast_cin();
    ll t=1;
    // cin >> t;
    while(t--) {
        shreyu();
    }
    return 0;
 }