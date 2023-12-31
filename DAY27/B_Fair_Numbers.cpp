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
 
 bool isFair(string s, ll n){
    for(int i=0 ; i<s.size(); i++){
        if(s[i]=='2' && n % 2 != 0){
            return false;
        }else
        if(s[i]=='3' && n %3 != 0){
            return false;
        }else
        if(s[i]=='4' && n % 4 != 0){
            return false;
        }else
        if(s[i]=='5' && n % 5 != 0){
            return false;
        }else
        if(s[i]=='6' && n % 6 != 0){
            return false;
        }else
        if(s[i]=='7' && n % 7 != 0){
            return false;
        }else
        if(s[i]=='8' && n %8 != 0){
            return false;
        }else
        if(s[i]=='9' && n %9 != 0){
            return false;
        }
    }
    return true;
 }

 void shreyu(){
    ll n; 
    cin>>n;
    string  s = to_string(n);

    if(isFair(s,n)){
        cout<<n<<ln;
        return;
    }
    
    while(1){
        n++;    
        string  s = to_string(n);
        if(isFair(s,n)){
            cout<<n<<ln;
            return;
        }
    }
    // while(isFair(s,n)==false){
    //     n++;    
    //     string  s = to_string(n);
    // }
    // cout<<n<<ln;
    // return;
    
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