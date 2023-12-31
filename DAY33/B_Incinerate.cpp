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
    int n ,k;
    cin>>n>>k;

    v64 v1;
    v64 v2;

    forn(i,n){
        int k;
        cin>>k;
        v1.pb(k);
    }
    forn(i,n){
        int k;
        cin>>k;
        v2.pb(k);
    }

    vector<pair<ll,ll>> vp;
        for(ll i=0; i<n;i++){
            vp.pb({v2[i],v1[i]});
        }

    sort(all(vp));

    ll i=0;
    ll total =k;    
    while(i<n && k>=0){
        if(vp[i].second <= total){
            i++;
        }else{
            total+=k-vp[i].fi;
            k-=vp[i].fi;
        }
    }

    if(k>=0){
        cout<<"YES"<<ln;
    }else{
        cout<<"NO"<<ln;
    }


    // sort(all(v1));
    // sort(all(v2));

    // int maxi = v1[n-1];

    // while(maxi>0){
    //     if(v2.size() == 0){
    //         cout<<"NO"<<ln;
    //         return;
    //     }
    //     if(k<=0){
    //         cout<<"NO"<<ln;
    //         return;
    //     }

    //     maxi -= k;
    //     // cout<<maxi
    //     if(maxi <= 0){
    //         break;
    //     }
    //     // cout<<maxi<<" ";
    //     k-=v2[0];
        
        
    //     v2.erase(v2.begin()+0);
        
    // }
    // // cout<<ln;
    // cout<<"YES"<<ln;

    
    
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