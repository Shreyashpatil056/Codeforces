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

    ll n ,sum=0,div,div2,shambhar=0,donshe=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i] == 100){
            shambhar++;
        }else{
            donshe++;
        }
    }
// sum = 500 // div = 250
// 3 = 200 200 200 // div == 300 // div2 = 150
//47x200 = 9400 + 500 = 9900 //div = 4950 // div = 2500
//200 even , 100 2
//200 odd , 100  2
//200 3, 

    if(n==1){
        cout<<"NO"<<ln;
        return;
    }

    if(n==2 && sum == 200){
        cout<<"YES"<<ln;
        // cout<<arr[0]<<" "<<arr[1]<<ln;
        return;
    }

    if(shambhar%2 == 1){
        cout<<"NO"<<ln;
        return;
    }

    if(donshe%2 == 1 && shambhar == 0){
        cout<<"NO";
        return;
    }

    cout<<"YES";
    return;




    div = sum/2;


    if(div%100 == 50){
        cout<<"NO";
        return; 
    }



    div2 = div/2;

    if(div2%100 == 50 && shambhar == 0){
        cout<<"NO";
        return; 
    }

    cout<<"YES";




    

    
    
    
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