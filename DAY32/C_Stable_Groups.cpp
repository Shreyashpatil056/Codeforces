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
    ll n , k, x;
    cin>>n>>k>>x;

    v64 v(n);
    forn(i,n){
        cin>>v[i];
    }
    sort(all(v));

    v64 temp(n-1);
    forn(i,n-1){
        temp[i] = max(0LL, (v[i+1] - v[i] -1 )/x);
    }
    sort(all(temp));

    int ans=n;
    for(int i=0;i<n-1;i++){
        if(temp[i]<=k){
            k-=temp[i];
            ans--;
        }
        else{
            break;
        }
    }

    cout<<ans;

//     v64 v;
//     forn(i,n){
//         ll x;
//         cin>>x;
//         v.pb(x);
//     }
    
//     sort(all(v));
// //first count no of gaps, 
//     ll gaps = 0;
//     forn(i,v.size()-1){
//         if(v[i+1]-v[i] > k){
//             gaps++;
//         }
//     }

// // add ns = no of students, starts from 1
//    ll ns = 1;

//    while(s >= ns && gaps > 0){
//         //rn mai ek ek student ko add krunga
//         for(ll i=0;i<v.size()-1 && s>0;i++){
//             if(v[i+1]-v[i] > k){
//                 ll d = v[i+1]-v[i];

//                 if(d > (ns+1)*k){ // agar gap no of students se nhi  bharta to continue;
//                     continue;
//                 }
//                 //else fill up student with value;
//                 ll nss = ns;
//                 ll temp = 1;
//                 while(nss-- && s>0){
//                     v.insert(v.begin()+temp+i, v[i+temp-1]+k);
//                     temp++;
//                 }
//                 gaps--;
//                 s-=ns;
//             }
//         }
        
//         ns++;   
//    }    

// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }cout<<ln;


// cout<<gaps+1;
// // cout<<ln<<"s->" <<s<< " ns->"<<ns<<ln;


    
    
 }
 int main()
 {
    fast_cin();
    // ll t;
    // cin >> t;
    // while(t--) {
        shreyu();
    // }
    return 0;
 }