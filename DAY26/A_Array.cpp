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
    int n ,neg=0,pos=0;
    cin>>n;
    int arr[n];
    forn(i,n) {
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]>0){
            pos++;
        }
    }

    v64 v1;
    v64 v2;
    v64 v3;
    
    sort(arr,arr+n);

    int i=0;
    // for(;i<n;i++){
    //     if(arr[i]<0){
            v1.pb(arr[i++ ]);
    //         break;
    //     }
    // }

    int c=0;
    if(neg>=3){
        for(;i<n,c<2;i++){
            if(arr[i]<0){
                v2.pb(arr[i]);
                c++;
            }
        }
    }
    int j=i+1;  
    for(;j<n;j++){
        if(arr[j]>0){
            v2.pb(arr[j]);
            break;
        }
    }

    for(;i<n;i++){
        // if(arr[j]>0){
            if(i!=j){
                v3.pb(arr[i]);
            }
            // v3.pb(arr[i]);
        // }
    }
   
    cout<<v1.size()<<" ";
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<ln;

    cout<<v2.size()<<" ";
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<ln;

    cout<<v3.size()<<" ";
    for(auto x:v3){
        cout<<x<<" ";
    }
    cout<<ln;

    
    
 }
 int main()
 {
    fast_cin();
    // ll t;
    // cin >> t;
    // while(t--) {
        shreyu();
    
    return 0;
 }