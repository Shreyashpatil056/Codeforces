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
    string s;
    cin>>s;

    int n = s.length();
    int i=0;
    //yes

    if(n==1){
        if((s=="Y" || s=="e" || s=="s")){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return;
    } 

    if(n==2){
        if(s=="Ye" || s=="es" || s=="sY"){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        return;
    }
    
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='Y'){
            if(s[i+1]!='e' || s[i+2] != 's'){
                cout<<"NO";
                return;
            }
        }

        else if(s[i]=='e'){
            if(s[i+1]!='s' || s[i+2] != 'Y'){
                cout<<"NO";
                return;
            }
        }else if(s[i]=='s'){
            if(s[i+1]!='Y' || s[i+2] != 'e'){
                cout<<"NO";
                return;
            }
        }else{
            cout<<"NO";
            return;
        }

    }
    
    cout<<"YES";
    
 }
 int main()
 {
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        shreyu();
        cout<<endl;
    }
    return 0;
 }