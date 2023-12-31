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
    int n ,two=0,seven=0;
    cin>>n;
    string s;
    cin>>s;
//FOR SINGLE DIGIT
    for(int i=0;i<n;i++){
        if(s[i]=='1' || s[i]=='4' || s[i]== '6' || s[i] == '8' || s[i] == '9'){
            cout<<1<<ln;
            cout<<s[i]<<ln;
            return;
        }
    }
//FOR 22 CASE && 77 case
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            two++;
            if(two==2){
                cout<<2<<ln;
                cout<<22<<ln;
                return;
            }
        }
        if(s[i]=='7'){
            seven++;
            if(seven==2){
                cout<<2<<ln;
                cout<<77<<ln;
                return;
            }
        }
        if(s[i]=='5' && i!=0){
            cout<<2<<ln;
            cout<<s[0]<<s[i]<<ln;
            return;
        }
        if(s[i]=='2' && i!=0){
            cout<<2<<ln;
            cout<<s[0]<<s[i]<<ln;
            return;
        } 
    }
//for no that can be divided by 3
    for(int i=0;i<n;i++){
        int three1= (int) (s[i]-'0');
        for(int j=i+1;j<n;j++){
            int test = three1 + (int) (s[j]-'0');
            if(test%3==0){
                cout<<2<<ln;
                cout<<s[i]<<s[j]<<ln;
                return;
            }  
        }
    }

    
    
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

//7 -> 70 - 77 - 84 - 91 - 98
//13 -> 
//17 -> 
//19 -> 57 
//23 -> 46 - 69 - 92
//29 -> 58 - 87
//31 -> 93
//37 -> 




