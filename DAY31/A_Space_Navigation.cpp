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
   int px,py;
		cin>>px>>py;
		string s;
		cin>>s;
		int x=0,y=0;
		forn(i,s.size()){
			if(x!=px){
				if(px>0){
					if(s[i]=='R')  x++;}
				else if(s[i]=='L') x--;
			}
			if(y!=py){
				if(py>0){
				if(s[i]=='U') y++;}
				else if(s[i]=='D') y--;
			}
 
		}
		if(x==px && y==py)
			cout<<"YES"<<ln;
		else
			// print("NO");
            cout<<"NO"<<ln;


    // if(a>=0 || b>=0){
    //     if(r>=a && u>=b){
    //         cout<<"YES"<<ln;
    //         return;
    //     }else{
    //         cout<<"NO"<<ln;
    //         return;
    //     }
    // }
    // if(a<=0 && b<=0){
    //     if(l>= abs(a) && d>=abs(b)){
    //         // cout<<l<<" "<<d<<" "<<a<<" "<<b<<ln;
    //         cout<<"YES"<<ln;
    //         return;
    //     }else{
    //         cout<<"NO"<<ln;
    //         return;
    //     }
    // }
    // if(a<=0 && b>=0){
    //     if(l>=abs(a) && u>=abs(b)){
    //                     cout<<l<<" "<<d<<" "<<a<<" "<<b<<ln;

    //         cout<<"YES"<<ln;
    //         return;
    //     }else{
    //         cout<<"NO"<<ln;
    //         return;
    //     }
    // }
    // if(a>=0 && b<=0){
    //     if(r>=abs(a) && d>= abs(b)){
    //         cout<<"YES"<<ln;
    //         return;
    //     }else{
    //         cout<<"NO"<<ln;
    //         return;
    //     }
    // }
    
    
    
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