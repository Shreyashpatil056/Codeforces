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
    ll k;
    int n;
    cin>>n>>k;

    v64 v1(n);
    v64 v2(n);
    ll ans = 0LL;
    for(int i=0;i<n;i++){
        cin>>v1[i];
        v2[i] = v1[i];
        ans+=v1[i];
    }

    int i=0;

    while(1){
        if(v1[i] % k == 0){
            v1[i] /= k;
            ans += v2[i];
            i++;
            if(i==n){
                i=0;
            }
        }else{
            break;
        }
    }

    

    cout<<ans<<ln;

    // for(ll i=0; i<v.size(); i++ )
    // {   
    //     // ans+=v[i];
    //     if(v[i]%k==0){
    //         ll p = k;
    //         while(p--){
    //             v.pb(v[i]/k);
    //         }
    //     }else{
    //         break;
    //     }
    // }
     
    // for(ll i=0;i<v.size();i++){
    //     ans+=v[i];
    //     // cout<<v[i]<<" ";
    // }

    // // for(ll i=0; i<v.size(); i++){
    //     // ll j = i%n;
    //     // ans+=0LL+v[j];
    // // }
    

    // cout<<ans<<ln;
    
 }
 int main()
 {
    fast_cin();
    int t;
    cin >> t;
    while(t--) {
        shreyu();
    }
    return 0;
 }