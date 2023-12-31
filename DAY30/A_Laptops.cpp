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
    ll n ;
    cin>>n;

    ll flag = 0;

    while(n--){
        ll a,b;
        cin>>a>>b;

        if(flag==0){
            if(a!=b){
                flag = 1;
            }
        }

        




    }
if(flag==1){
            cout<<"Happy Alex"<<ln;
        }else{
            cout<<"Poor Alex"<<ln;
        }





    // vector<pair<ll , ll>> v(n);
    // int flag = 0,sum=0,temp1=0,temp2=0;
    // forn(i,n){
    //     cin>>v[i].first>>v[i].second;
    //     // if(i>=1){
    //     //     temp1 = v[i-1].first;
    //     //     temp2 = v[i-1].second;
    //     //     if(temp1 == v[i].first && temp2!=v[i].second){
    //     //         flag = 1;
    //     //     }
    //     // }
    // }  
    // if(flag == 1){
    //     cout<<"Happy Alex"<<ln;
    //     return;
    // }
    
    // sort(v.begin(),v.end());

    // temp1 = v[0].first;

    // for(ll i=1;i<n;i++){
    //     if(v[i].first < temp1){
    //         if(v[i-1].second < v[i].second){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     temp1 = v[i].first;
    // }
    // if(flag == 1){
    //     cout<<"Happy Alex"<<ln;
    //     return;
    // }
    // else{
    //     cout<<"Poor Alex"<<ln;
    // }

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