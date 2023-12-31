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

    if(n<=9){
        cout<<n<<ln;
        return;
    }
    if(n>45){
        cout<<-1<<ln;
        return;
    }

    //45 = 1+2+3+4+5+6+7+8+9
    //44 = 2+3+4+5+6+7+8+9
    string s="";

    if(n-9>=0){
        n-=9;
        s+='9';
    }
    if(n-8>=0){
        n-=8;
        s+='8';
    }
    if(n-7>=0){
        n-=7;
        s+='7';
    }
    if(n-6>=0){
        n-=6;
        s+='6';
    }
    if(n-5>=0){
        n-=5;
        s+='5';
    }
    if(n-4>=0){
        n-=4;
        s+='4';
    }
    if(n-3>=0){
        n-=3;
        s+='3';
    }
    if(n-2>=0){
        n-=2;
        s+='2';
    }
    if(n-1>=0){
        n-=1;
        s+='1';
    }
    
    reverse(s.begin(),s.end());

    cout<<s<<ln;
    
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