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

    ll a[n][5];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<5;j++){
            cin>>a[i][j];
        }
    }

    ll flag=0;

    for(ll i = 0 ; i < 4 ; i++){
        for(ll j = i + 1 ; j < 5 ; j++){
            ll one=0,two=0,both=0;
            for(ll k=0;k<n;k++){
                if(a[k][i] == 1 && a[k][j] == 1){
                    both ++;
                }else if(a[k][i]==1){
                    one++;
                }
                else if(a[k][j]==1){
                    two++;
                }
            }
             ll first=n/2-one,second=n/2-two;
	            
	            if(first>=0 && second>=0 && both==first+second){
	                flag=1;
	                break;
	            }
        }
        if(flag) break;
    }

     if(flag)cout<<"YES\n";
	    else cout<<"NO\n";

    
    
    
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