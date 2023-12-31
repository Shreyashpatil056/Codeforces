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
    cin>>n ;

    v64 v(n);
    v64 v1;
    forn(i,n){
        cin>>v[i];
    }

    if(n<=2){
        cout<<"YES"<<ln;
        return;
    }

    // int c=0;
    v1.pb(v[0]);
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]){
            v1.pb(v[i+1]);
        }
    }

    // if(v1[v1.size()-1]!=v[n-1]){
    //     v1.pb(v[n-1]);
    // }

    int k = v1.size();

    // for(int i=0;i<k;i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout <<ln;
    

    if(k<=2){
        cout<<"YES"<<ln;
        return;
    }

    

    for(int i=1;i<k-1;i++){
        if(v1[i]>v1[i-1] && v1[i]>v1[i+1]){
            cout<<"NO"<<ln;
            return;
        }
    }

    cout<<"YES"<<ln;


    // int in = 1;
    // while(v[in-1]==v[in]){
    //     in++;
    // }
    // if(v[in]>v[0]){
    //     c++;
    // }
    // in = n-2;
    // while(v[in+1]==v[in]){
    //     in--;
    // }
    // if(v[n-1]<v[in]){
    //     c++;
    // }

    // if(c==2){
    //     cout<<"NO"<<ln;
    // }else{
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