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
    int m; 
    int arr[3];
    int ct=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        ct+=arr[i]-1;
    }
    cin>>m;
    sort(arr,arr+3);

    int k = arr[0]+arr[1]+1-arr[2];
    // cout<<k;

    if(m>ct){
        cout<<"No"<<ln;
        return;
    }

    if(k+m>=0){
        cout<<"YES"<<ln;
        return;
    }

    else {
        cout<<"NO"<<ln;
        return;
    }

    



    cout<<"Yes"<<ln;
    //1140
    //K=A+B+1-C ; K
    
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

 