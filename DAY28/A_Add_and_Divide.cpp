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
 
 int f(int a, int i){
    int c=0;
    while(a>=1){
        a/=i;
        c++;
    }
    return c;
 }

 void shreyu(){
    ll a,b,x,y,z; 
    cin>>a>>b;

    if(a<b){
        cout<<1<<ln;
        return;
    }

    if(a==b){
        cout<<2<<ln;
        return;
    }

    x=a;
    ll c1=0;
    if(b==1){
        b++;
        while(x!=0){
            c1++;
            x/=b;
        }
        c1++;
        b--;
    }else{
        while(x!=0){
            c1++;
            x/=b;
        }
    }

    z = c1;
    ll ct = INT64_MAX;

    for(int i=1;i<=30;i++){

        b++;
        c1=i;
        y=a;

        while(y!=0){
            y/=b;
            c1++;
        }
        ct = min(c1,ct);

    }

    cout<<min(z,ct)<<ln;
    // if(b==1){
    //     b++;
    //     c++;
    // }

    // if(a/b==0){
    //     cout<<c+1<<ln;
    //     return;
    // }

    // int ans = c;
    // c=0;

    // for(int i = b ; i <= sqrt(a)+4 ; i++){
    //     c = i-b;
    //     c += f(a,i);
    //     m = min(c,m);
    // }
    // ans += m;
    // cout<<ans<<ln;

    
    
    
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