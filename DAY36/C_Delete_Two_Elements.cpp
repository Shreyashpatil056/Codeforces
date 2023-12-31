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
    ll n,ans=0; 
    cin>>n;
    // v64 v;
    vector<double> v;
    double sum=0,c=0,k=0,mean=0;
    forn(i,n){
        int x;
        cin>>x;
        v.pb(x);
        sum+=x;
    }
    
    // sort(all(v));

    mean = sum/(double)n;
    // cout<<"Mean-> "<<mean<<ln;

    // bool in=0;
    // for(int i=0;i<v.size();i++){
    //     while(v[i]==mean && i<v.size()){
    //         c++;
    //         v.erase(v.begin()+i);
    //         in =1;
    //         // i--;
    //     }
    //     if(in){
    //         break;
    //     }
    // }
    // cout<<c<<" ->c"<<ln;

    // n = v.size();
    // ans+=(c*(c-1))/2;

    map<double,ll> mp;
    for(ll i=0;i<n;i++){
        mp[v[i]]++;
    }

    // cout<<ans<<" ->c"<<ln;
    double s=-1,e=-1;

    for(auto it: mp){
        s = it.fi;
        e = 2*mean - s;
        
        if(mp.find(e) != mp.end()){
            if(s==e){
                ans+=(it.se * (it.se - 1))/2;
                // continue;
            }else{
                ans+= it.se * mp.find(e)->se;
                it.se=0;
                mp.find(e)->se =0;
            }
        }
    }

    // for(int i = 0 ; i < n ; i++){
    //     if(v[i]>mean){
    //         break;
    //     }
    //     double req = 2*mean - (double)v[i];
    //     if(req == lastReq) {
    //         ans += lastans;
    //         continue;
    //     }
    //     auto it = mp.find(req);
    //     if(it != mp.end()){
    //         // cout<<"req-> "<<req<<" ";
    //         // cout<<it->first<<"---"<<it->second<<endl;
    //         ans+= it->second;
    //         lastReq = req;
    //         lastans = it->second;
    //         // cout<<ans<<" -anss-->"<<endl;
    //     }

    //     // if(binary_search(v.begin(),v.end(),req)){
    //     //     double nreq = *lower_bound(v.begin(),v.end(),req);
    //     //     if(nreq==req){
    //     //         ans++;
    //     //     }
    //     // }
    // }

    cout<<ans<<ln;


    
    
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