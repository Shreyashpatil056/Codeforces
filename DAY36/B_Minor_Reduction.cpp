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
    int n,cnt=0 ;
    string s;
    cin>>s;
    
    n = s.size();

    for(int i=0;i<n;i++){
        if(s[i]-'0' + s[i+1]-'0' > 9){
            cnt = i;
        }
    }

    for(int i=0;i<cnt;i++){
        cout<<s[i];
    }

    cout<<s[cnt] - '0' + s[cnt+1] -'0';

    for(int i=cnt+2;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;

//sfor(i, a, b) for (ll i = a; i < b; i++)

//     for(int i=0;i<n-1;i++){
//         int a = s[i] - '0';
//         int b = s[i+1] - '0';

//         if(a+b>=10){
//             int c = a+b;
//             string temp = to_string(c);
//             s[i] = temp[0];
//             s[i+1] = temp[1];
//             // string temp = to_string(a+b);
//             // temp+=s;
//             cout<<s<<ln;
//             return;
//         }
//     }
//             int i=0;
//             int a = s[i] - '0';
//             int b = s[i+1] - '0';
// //192
//             s.erase(s.begin()+0);
//             s.erase(s.begin()+0);
//             string temp = to_string(a+b);
//             temp+=s;
//             cout<<temp<<ln;
//             return;

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