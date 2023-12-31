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
    int n ,m,d;
    cin>>n>>m>>d;
    int arr[n];
    int brr[m];
    map<int,int> mp;
    forn(i,n){
        cin>>arr[i];
        mp.insert({arr[i],i});
    }

    forn(i,m){
        cin>>brr[i];
    }

    int crr[m];

    for(int i=0;i<m;i++){
        auto it = mp.find(brr[i]);
        crr[i] = it->second;
    }

    // for(int i=0;i<n;i++){
    //     cout<<crr[i]<<" ";
    // }cout<<endl;

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(brr[i] == arr[j]) {
    //             crr[i] = j;
    //             break;
    //         }
    //     }
    // }

    if(!is_sorted(crr,crr+m)){
        cout<<0<<endl;
        return;
    }
    
    int maxd = 0;
    for(int i=0;i<m-1;i++){
        maxd = max(maxd, crr[i+1] - crr[i]);
    }
    int mind = INT_MAX;
    for(int i=0;i<m-1;i++){
        mind = min(mind, crr[i+1] - crr[i]);
    }

    int ans = 0;
    int sarak = 0;
    sarak = n - maxd+1;
    // ans = d - maxd +1;
    // cout<<maxd<<" ";
    if(n>d+1){
        mind = min(mind,d+1-maxd);
    }
    if(mind < 0) mind = 0;
    cout<<mind<<endl;

    // ans = min(ans , mind);
    //ab agar ans esse bhi chota hoo sakta hai toh woh dekho



    
    
    // cout<<ans<<endl;
    
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