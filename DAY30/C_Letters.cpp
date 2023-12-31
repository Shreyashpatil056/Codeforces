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
    ll n,m,k=0,c=0,sum=0; 
    cin>>n>>m;

    v64 v1(n);
    v64 v3(n);

    forn(i,n) {
        cin>>v1[i];
        sum+=v1[i];
        v3[i]=sum;
    }
    // for(int i=0;i<n;i++) cout<<v3[i]<<" ";

    v64 v2(m);
    forn(i,m) {

        cin>>v2[i];
        ll t = v2[i];

        if(t<=v3[0]) {
            cout<<1<<" "<<t<<ln;
            continue;
        }



        ll start = 0 , end = n-1;
        bool f=false;
        while(start <= end){
            ll mid = start + (end-start)/2;

            if(v3[mid] == t){
                if(mid==0){
                    cout<<1<<" "<<t<<ln;
                    // cout<<100;
                    f = true;
                    break;
                    // return;
                }
                // cout<<mid<<"-mid";
                cout<<mid+1<<" "<<t - v3[mid-1]<<ln;
                f = true;
                break;
            }

            if(v3[mid] < t){
                if(start == mid){
                    mid++;
                }
                start = mid ;
            }
            else{
                end = mid-1;
            }
        }
        if(!f){
            //  cout<<100;
            cout<<start+1<<" "<<t - v3[start-1]<<ln;
        }

    }
    
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