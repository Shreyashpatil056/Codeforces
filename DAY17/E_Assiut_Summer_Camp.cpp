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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int maxi, maxi2;
    maxi = max(max(a,b),max(c,d));

    if(maxi == a ){
        cout<<"Hussien ";
        maxi2 = max(max(b,c),d);    

        if(maxi2 == b){
            cout<<"Atef"<<ln;
            // maxi2 = max(max(a,c),d);
            return;
        }
        if(maxi2 == c){
            cout<<"Karemo"  <<ln;
            // maxi2 = max(max(b,a),d);
            return;
        }
        if(maxi2 == d){
            cout<<"Ezzat"<<ln;
            // maxi2 = max(max(b,c),d);
            return;
        }
        return;
    }


    if(maxi == b){
        cout<<"Atef ";
        maxi2 = max(max(a,c),d);

        if(maxi2 == a){
            cout<<"Hussien"<<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
        //     cout<<"Atef"<<ln;
        //     maxi2 = max(max(a,c),d);
        // }
        if(maxi2 == c){
            cout<<"Karemo"  <<ln;
            return;
            // maxi2 = max(max(b,a),d);
        }
        if(maxi2 == d){
            cout<<"Ezzat"<<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
        return;
    }

    if(maxi == c){
        cout<<"Karemo ";
        maxi2 = max(max(a,b),d);

        if(maxi2 == a){
            cout<<"Hussien"<<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
        if(maxi2 == b){
            cout<<"Atef"<<ln;
            return;
            // maxi2 = max(max(b,a),d);
        }
        if(maxi2 == d){
            cout<<"Ezzat"<<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
    }

    if(maxi == d){
        cout<<"Ezzat ";
        maxi2 = max(max(a,b),c);

        if(maxi2 == a){
            cout<<"Hussien"<<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
        if(maxi2 == b){
            cout<<"Atef"<<ln;
            return;
            // maxi2 = max(max(b,a),d);
        }
        if(maxi2 == c){
            cout<<"Karemo"  <<ln;
            return;
            // maxi2 = max(max(b,c),d);
        }
    }
    // if(maxi == c){
    //     cout<<"Karemo"  <<ln;
    //     maxi2 = max(max(b,a),d);
    // }
    // if(maxi == d){
    //     cout<<"Ezzat"<<ln;
    //     maxi2 = max(max(b,c),d);
    // }

    
    
    
    
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