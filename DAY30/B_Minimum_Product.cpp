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
    ll a,b,x,y,n; 
    cin>>a>>b>>x>>y>>n;

    // kitna kam ho sakta hai.....
    ll a1 = a-(min(a-x,n));
    ll b1 = b-(min(b-y,n));

    if(a1 > b1){
        swap(a,b);
        swap(x,y);
    }



    //


    // if(a > b){
    //     swap(a,b);
    //     swap(x,y);
    //     // cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<n<<ln;
    // }



    
    // a = mini;
    // b = maxi;

    // if(a==b){
    //     ll d1 = a-x;
    //     ll d2 = b-y;
    //     if(d1>d2){
    //     }
    // }

    ll d = min(a-x,n);
    a = a-d;
    n = n-d;

    // while(a>x && n>0){
    //     n--;
    //     a--;
    // }
    
    d = min(b-y,n);
    b = b-d;
    n = n-d;

    // while(b>y && n>0){
    //     n--;
    //     b--;
    // }

    cout<<a*b<<ln;
    
    
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