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
    int n ;string s;
    cin>>n>>s;
    if(n!=5){
        cout<<"NO"<<ln;
        return;
    }

    if(s[0]=='T' || s[1]=='T' || s[2]=='T' || s[3]=='T' || s[4]=='T'){
        if(s[0]=='i' || s[1]=='i' || s[2]=='i' || s[3]=='i' || s[4]=='i'){
            if(s[0]=='m' || s[1]=='m' || s[2]=='m' || s[3]=='m' || s[4]=='m'){
                if(s[0]=='u' || s[1]=='u' || s[2]=='u' || s[3]=='u' || s[4]=='u'){
                    if(s[0]=='r' || s[1]=='r' || s[2]=='r' || s[3]=='r' || s[4]=='r'){
                        cout<<"YES"<<ln;
                        return;
                    }
                }
            }
        }
        

    }
    
    cout<<"NO"<<ln;
    
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