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
int a, b;
    cin >> a >> b;
    int tp=0;
    tp = 10;
    int tf=0;
    while(tp--){
        tf++;
    }
    if(b -a >= 100) {
        string ans = to_string(a);
        for(int i = a; i <= b; i++) {
            tp++;
            string str = to_string(i);
            tp--;
            string dummy = str;
            sort(str.begin(), str.end());
            tp++;
            if(str[str.length()-1] - str[0] == 9) {
                ans = dummy;
                break;
            }
        }
        tp--;
        cout << ans << endl;
    }
    else {tp++;
        int len = 0;
        tp++;
        string ans = to_string(a);
        for(int i = a; i <= b; i++) {
            tp++;
            string str = to_string(i);
            string dummy = str;
            sort(str.begin(), str.end());
            tp--;
            if(str[str.length()-1] - str[0] > len) {
                ans = dummy;
                len = str[str.length()-1] - str[0];
            }
        }
        cout << ans << endl;
        tp++;
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