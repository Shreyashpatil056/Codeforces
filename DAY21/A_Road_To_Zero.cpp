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
    ll a,b,x,y;
    cin>>x>>y>>a>>b;

    ll d = abs(x-y);

    if(x==0 && y==0){
        cout<<0<<ln;
        return;
    }

    if(x>=0 && y>=0){
        ll cost = 0;
        cost+=a*d;
        ll mini=min(x,y);
        if(a*2<b){
            cost+= (2*a) * mini;
        }else{
            cost+= b*mini;
        }
        cout<<cost<<ln;
        return;
    }

    if(x<=0 && y<=0){
        ll cost = 0;
        cost+=a*d;
        ll maxi=max(x,y);
        if(a*2<b){
            cost+= (2*a) * maxi;
        }else{
            cost+= b*maxi;
        }
        cout<<cost<<ln;
        return;
    }

    // ll cost = 0;
    cout<<d*a<<ln;

    
// 3 5
//d=2
//

    
    
    
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