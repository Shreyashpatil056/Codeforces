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
    v64 v(n);
    map<ll, ll > mp;
    forn(i,n){
        cin>>v[i];
        mp[v[i]] = i+1;
    } 
    ll m =-1;
    
    for(auto i:mp){
        for (auto j:mp){
            if(__gcd(i.fi , j.fi) == 1){
                m = max(m,i.se+j.se);
            }
        }
    }




    // bool f1=false;
    // bool f2=false;
    // bool f3=false;
    // bool f4=false;
    // bool f5=false;
    // bool f6=false;
    // bool f7=false;
    // bool f8=false;
    // bool f9=false;
    // bool f10=false;
    // bool f11=false;

    // for(int i = n-1; i>=0;i--){
    //     if(v[i]==1){
    //         m = max(m,i+n+1); 
            
    //             if(f11){
    //                 cout<<m<<ln;
    //                 return;
    //             }else if(f10){
    //                 f11 = true;
    //             }else if(f9){
    //                 f10 = true;
    //             }else if(f8){
    //                 f9 = true;
    //             }else if(f7){
    //                 f8 = true;
    //             }else if(f6){
    //                 f7 = true;
    //             }else if(f5){
    //                 f6 = true;
    //             }else if(f4){
    //                 f5 = true;
    //             }else if(f3){
    //                 f4 = true;
    //            }else if(f2){
    //                 f3 = true;
    //            }else if(f1){
    //                 f2 = true;
    //            }else {
    //                 f1 = true;
    //            }    
    //     }   
    //     for(int j = i-1; j>=0;j--){
    //         if(__gcd(v[i],v[j])==1){
    //            m = max(m,i+j+2); 
    //            if(f3){
    //                 cout<<m<<ln;
    //                 return;
    //            }else if(f2){
    //                 f3 = true;
    //            }else if(f1){
    //                 f2 = true;
    //            }else {
    //                 f1 = true;
    //            }  
    //            break;
    //         }
    //     }
    // }
    
    cout<<m<<ln;
    
    
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