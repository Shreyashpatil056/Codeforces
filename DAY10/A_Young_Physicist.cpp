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
    int arr[n][3];
    int brr[3];
    int sum0=0;
    int sum1=0;
    int sum2=0;
    // int countzeros=0;
    // int k =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j]; 
            // int k = arr[i][j];
            // brr[j] += arr[i][j];             // sum+=x;
            if(j==0){
                sum0+=arr[i][j];
            }
            if(j==1){
                sum1+=arr[i][j];
            }
            if(j==2){
                sum2+=arr[i][j];
            }
        }
    } 

    if(sum0!=0 || sum1!=0 || sum2!=0){
        cout<<"NO"<<ln;
        return;
    }

    cout<<"YES"<<ln;
    
    // for(int i=0;i<n;i++){
    //     sum+=arr[0];
    // } 


    // cout<<"YES"<<ln;
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