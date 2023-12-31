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
 
 int left(int arr[],int  i){
    int c=0;
    while(arr[i-1]<=arr[i] && i>0){
        c++;
        i--;
    }
    return c;
 }

int right(int arr[],int i,int n){
    int c=1;
    while(arr[i+1]<=arr[i] && i<n-1){
        c++;
        i++;
    }
    return c;
}


 void shreyu(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c=0,maxi=0;

    for(int i=0;i<n;i++){
        c = left(arr,i)+right(arr,i,n);
        // cout<<right(arr,i,n);
        // cout<<left(arr,i)<<" "<<right(arr,i,n);
        if(c>maxi){
            maxi = c;
        }
    }
    if(maxi>n){
        cout<<n;
        return;
    }
    cout<<maxi;
    
    
    
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