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
    int n ;
    cin>>n;
    int a;
    cin>>a;
    v64 v;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    int b;
    cin>>b;
    v64 v1;
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        v1.pb(x);
    }

    int one, two , c=0;

    while(v.size() >0 && v1.size()>0){
        one = v[0];
        two = v1[0];
        c++;
        if(c==1000) {cout<<-1; return;}

        if(one>two){
            v.pb(two);
            v.pb(one);
        }else{
            v1.pb(one);
            v1.pb(two);
        }
        v1.erase(v1.begin()+0);
        v.erase(v.begin()+0);
    }

    if(v.size()>0)cout<<c<<" "<<1;
    else cout<<c<<" "<<2;
    

    
    
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