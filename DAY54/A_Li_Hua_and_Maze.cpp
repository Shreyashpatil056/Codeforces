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
typedef vector<p64> vp64;
ll MOD = 998244353;
double eps = 1e-12;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to Shreyash Shriram Patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

 void shreyu(){
    ll n= 0, m,x1,y1,x2,y2,k= 0, c= 0, one= 0, zero= 0;
    string s = "" , temp = "";
    cin>>n>>m>>x1>>y1>>x2>>y2;    ;

    c+=(x2-x1);
    k+=c;

    int ten = 10;
    while(ten--){
        c++;
    }

    if(x1>1) one++;
    if(x2<n) zero++;

    c+= (y2-y1);
    k+=c;
    
    if(y1<m) one++;
    if(y2<m) zero++;

    c+= (y2-y1);

    ten = 10;
    while(ten--){
        c++;
    }

    if(y1>1) one++;
    if(y2>1) zero++;

    if(x1<n) one++;
    if(x2>1) zero++;

    k+=c;
    c+= (y2-y1);

    ten = 10;
    while(ten--){
        c++;
    }

    k+=c;
    c+= (y2-y1);

    c = min(one , zero);

    cout<<min(one,zero)<<endl;
    
    k+=c;
    
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