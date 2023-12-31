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
    int n, diff = 1 ,mini = INT_MAX;
    cin>>n;
    int arr[n];
    forn(i,n){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int a,b;
    bool check = 0;
    forn(i,n-1){
        if(arr[i] != arr[i+1]){
            diff++;
            // a=arr[i];
            b=arr[i+1];
            // p = arr[i+1] ;
            check=1;
            break;
            // mini = min(mini, abs(abs(b)-abs(a)));
        }
    }

    if(check==0){
        cout<<-1<<ln;
        return;
    }
    diff = b - arr[0];
    for(int i=0;i<n-1;i++){
        diff = __gcd(arr[i+1]-arr[i],diff);
    }   

    
    // if(diff==3){
        cout<<diff<<ln;
        // return;
    // }

    //-100  -73  -9  -5  4  32  59  68  70  100

    
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