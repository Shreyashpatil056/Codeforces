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
 
 ll mm(ll arr[],ll n)
{   
    ll c=0;
    ll ans = 0;

    for(ll i=n-1;i>=0;i--){
        if(arr[i]==0){
            c++;
        }
        else{
            ans+=c;
        }
    }

    return ans;

}
 void shreyu(){
    ll n ;
    cin>>n;

    ll arr[n];
    ll brr[n];
    ll crr[n];

    forn(i,n){
        cin>>arr[i];
        brr[i] = arr[i];
        crr[i] = arr[i];
    }
    
    if(n==1){
        cout<<0<<ln;
        return;
    }

    ll m=0,c=0,q=0;

    m = mm(arr,n);

    for(ll i=0;i<n;i++){
        if(arr[i]==0){
            brr[i]=1;
            break;
        }
    }
    c=( mm(brr,n));

    for(ll i=n-1;i>=0;i--){
        if(arr[i]==1){
            crr[i]=0;
            break;
        }
    }
    q=(mm(crr,n));

    cout<<max(max(m,c),q)<<ln;
    
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