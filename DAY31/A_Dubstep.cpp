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
    // int n 
    // cin>>n
    string s;
    cin>>s;
    int n = s.size();
    int i=0;
// while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
//             i+=3;
//             // f=1;
//         }
    for(;i<n;i++){
        // int f=0;
        // while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        //     i+=3;
        //     f=1;
        // }
        // if(f==1 && i<n-3){
        //     cout<<" ";
        //     f=0;
        // }
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            // s[i]=' ';
            // s[i+1]=' ';
            // s[i+2]=' ';
            i+=2;
            cout<<" ";
            // continue;
        }else{
        cout<<s[i];}
        // cout<<" ";
    }
    
    // cout<<s;
    
 }
 int main()
 {
    fast_cin();
    // ll t;
    // cin >> t;
    // while(t--) {
        shreyu();
    // }
    return 0;
 }