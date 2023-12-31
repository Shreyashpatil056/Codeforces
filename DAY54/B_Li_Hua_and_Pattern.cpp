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

#define forn(i,e) for(ll i = 0; i < e; i++)

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
    ll n = 0, k = 0, c= 0 , d = 0 ;
    cin>>n >>k  ;

    int v1[n][n];

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < n; j++)
        {   
            v1[i][j] = 0;
        }
    }

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < n; j++)
        {   
            cin>>v1[i][j];
        }
    }

    for(int i = 0; i<n/2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v1[i][j] != v1[n-i-1][n-j-1])c++;
        }
    }    

    for(int i = 0; i<n/2; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(v1[i][j] != v1[n-i-1][n-j-1]) d++;
        }
    }  
    
    if(n % 2 != 0){
        for(int j = 0; j<n/2; j++){
            if(v1[( n / 2)][j] != v1[( n / 2)][n-j-1]){
                c++;
                d++;
            }
        }
    }
    
    if(c > k){
        cout<<"NO" <<ln;
        return;
    }

    d-=c;

    if((k-c)%2 == 0 || n%2 == 1){
        cout<<"YES" <<ln;
        return;
    }

    cout<<"NO"<<ln;
    
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