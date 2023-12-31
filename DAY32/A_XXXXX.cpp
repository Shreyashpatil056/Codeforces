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
    int n ,k,sum=0,flag=0,m=0;
    cin>>n>>k;
    int arr[n];

    forn(i,n) {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%k != 0){
            flag = 1;
        }
    }
    
    if(sum % k != 0){
        cout<<n<<ln;
        return;
    }

    if(flag == 0){
        cout<<-1<<ln;
        return;
    }

    int l = 0;
    int r = n-1,sum2=sum;

    while(l<n){

        sum =- arr[l];
        if(sum % k != 0){
            // cout<<n-l-1<<ln;
            m = n-l-1;
            // return;
            break;
        }

        l++;
    }

    while(r>=0){

        sum2 =- arr[r];
        if(sum2 % k != 0){
            // cout<<r<<ln;
            m = max(m,r);
            // return;
            break;
        }

        r--;
    }

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