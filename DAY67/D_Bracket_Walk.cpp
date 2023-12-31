// submitted the following
#include <bits/stdc++.h>
#include <ext/random>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;
typedef pair<int, int> pii;

__gnu_cxx::sfmt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

template<typename T>
std::ostream& operator << (std::ostream& os, const vector<T>& a) {
    for (const T& x : a) {
        os << x << ' ';
    }
    return os;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    string s;
    cin >> n >> q >> s;

    if (n % 2 == 1) {
        for (int i = 0; i < q; ++i) {
            cout << "NO\n";
        }
        return 0;
    }

    map<char, set<int>> twice;

    auto check_add = [&](char c, int i) {
        if (i < 0 || i + 1 >= n) {
            return;
        }
        if (s[i] == c && s[i + 1] == c) {
            twice[c].insert(i);
        }
    };
    auto check_del = [&](char c, int i) {
        if (i < 0 || i + 1 >= n) {
            return;
        }
        if (s[i] == c && s[i + 1] == c) {
            twice[c].erase(i);
        }
    };

    for (int i = 0; i < n - 1; ++i) {
        check_add('(', i);
        check_add(')', i);
    }

    auto query = [&]() {
        if (s[0] == ')' || s[n - 1] == '(') {
            return false;
        }
        auto& O = twice['('];
        auto& C = twice[')'];
        if (O.empty()) {
            if (C.empty()) {
                return true;
            }
            return false;
        }
        if (C.empty()) {
            return false;
        }
        if (*C.begin() < *O.begin()) {
            return false;
        }
        if (*O.rbegin() > *C.rbegin()) {
            return false;
        }
        return true;
    };

    while (q--) {
        int i;
        cin >> i;
        --i;
        check_del(s[i], i - 1);
        check_del(s[i], i);
        s[i] ^= '(' ^ ')';
        check_add(s[i], i - 1);
        check_add(s[i], i);
        cout << (query() ? "YES\n" : "NO\n");
    }

    return 0;
}




//  #pragma GCC optimize("Ofast")
//  #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//  #pragma GCC optimize("unroll-loops")
//  #include <bits/stdc++.h> 
 
//  using namespace std;
//  typedef long long ll;
//  typedef long double ld;
//  typedef pair<ll,ll> p64;
//  typedef pair<int,int> p32;
//  typedef pair<double,double> pdd;
//  typedef vector<ll> v64;
//  typedef vector<int> v32;
//  typedef vector<vector<ll> > vv64;
//  typedef vector<vector<int>> vv32;
//  typedef vector<vector<p64>> vvp64;
//  typedef vector<p32> vp32;
//  typedef vector<p64> vp64;
//  ll mod = (1000 * 1000 * 1000 + 7);
//  ll MOD = 998244353;
//  double eps = 1e-12;
//  #define rforsn(i,s,e) for( ll i = s; i >= e; i--)
//  #define rforn(i,s)    for( ll i = s; i >= 0; i--)
//  #define forsn(i,s,e)  for( ll i = s; i < e; i++)
//  #define forn(i,e)     for( ll i = 0; i < e; i++)
//  #define ln "\n"
//  #define dbg(x) cout<<#x<<" = "<<x<<ln
//  #define mp make_pair
//  #define pb push_back
//  #define fi first
//  #define se second
//  #define line cout << endl
//  #define pzero cout << 0
//  #define pmin1 cout << -1
//  #define sp " "
//  #define INF 2e18
//  #define nope cout << "NO" << endl
//  #define yup cout << "YES" << endl
//  #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//  #define all(x) (x).begin(), (x).end()
//  #define sz(x) ((ll)(x).size())
//  #define max_ele(a) *max_element( a.begin(), a.end())
//  #define min_ele(a) *min_element( a.begin(), a.end())
//  ll find_lcm ( ll a, ll b) { ll p = __gcd(a,b); return (a * b ) / p ;}
//  ll countBits ( ll number) { return (ll) log2(number) + 1 ;}
//  bool isPrime ( ll n) { if( n <= 1) return false; if( n <= 3) return true; if( n % 2 == 0|| n % 3 == 0) return false; for(ll i=5; i*i<=n; i=i+6) if(n%i==0|| n%(i+2)==0) return false; return true;}
//  bool isPowerOfTwo ( ll n) { if( n == 0) return false; return (ceil(log2(n)) == floor(log2(n)));}
//  bool isPerfectSquare ( ll x) { if ( x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
//  ll exp (ll a, ll b, ll m) { ll res = 1; while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b = b >> 1; } return res ;}
//  bool sortbysec ( const pair <ll,ll> &a, const pair <ll,ll> &b) { return ( a.second < b.second);}
//  ll mprime  (ll a, ll b) { return exp ( a, b - 2, b); }
//  ll power   (ll a, ll b) { ll ans = 1; while (b != 0){ if( b & 1) { ans = (ans * a) % MOD;} a= (a*a) %MOD; b=b/2;} return ans;}
//  ll mod_add (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
//  ll mod_mul (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
//  ll mod_sub (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//  ll mod_div (ll a, ll b, ll m) { a = a % m; b = b % m; return (mod_mul(a, mprime(b, m), m) + m) % m;}
//  ll binExp (ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a); a = (a * a); b >>= 1; } return x; }
//  //ll fact[200007];
//  //void factorial(){ fact[0] = 1 ; for (ll i = 1 ; i < 200007 ; i++) fact[i] = (fact[i-1] * i) % mod;}
//  void debug  (ll x) { cout << "x: " << x << endl;}
//  void debug  (ll x, ll y) { cout << "x y: " << x << sp << y << endl;}
//  void debug  (ll x, ll y, ll z) { cout << "x y z: " << x << sp << y << sp << z << endl;}
//  void printv ( v64 v) { cout<<"v->[ "; for (ll i = 0 ; i < v.size(); i++) cout<< v[i] <<sp ; cout<<"]"<<endl; }
//  void printm ( map <char,ll> m) { cout <<"{---" << endl; for(auto i :m) cout<< i.fi <<" "<< i.se <<endl; cout<<"---}" << endl; }
//  void printvp ( vp64 vp){ cout<<"{-vp-"<< endl; for( auto i : vp) cout<< i.fi << sp << i.se << endl ; cout<<"-vp-}"<< endl; }
//  v64  ppf ( ll n){ v64 v ; while ( n % 2 == 0 ){ v.pb(2); n = n / 2;} for( ll i = 3; i <= sqrt(n); i = i + 2){ while ( n % i == 0) { v.pb(i); n = n/i;}} if(n > 2){ v.pb(n);} return v;}  //printprimefactors
//  void printPrimeupto ( ll n        ) { ll chk = 0; for( ll i = 1; i <= n; i++) { for(ll j = 2; j < i; j++) { if( i % j == 0) { chk++; break; }} if( chk == 0 && i != 1) cout<<i<<sp; chk = 0; } cout<<endl; }
//  v64  primepushVector ( v64 v, ll n) { ll chk = 0; for( ll i = 1; i <= n; i++) { for(ll j = 2; j < i; j++) { if( i % j == 0) { chk++; break; }} if( chk == 0 && i !=1 ) v.pb(i); chk = 0; } return v; }
// //<=====================================================================>
 
// bool isvalid(string s, int n) {
//     int c = 0;
//     forn(i,n) {
//         if(s[i] == '(') c++;
//         else c--;
//         if(c < 0) return false;
//     } return true;
// }
 
 
// //<=====================================================================>
// void shreyu(){
//     ll one = 0, zero = 0, mini = INT_MAX, maxi = 0 ;
//     ll odd = 0, even = 0 ;
//     ll n = 0, m = 0, k = 0, c = 0,q;
//     string s = "" , temp = "";
//     cin >> n >> q ;
//     cin >> s;

//     ll left = 0, right = 0;

//     forn(i,n) {
//         if(s[i] == '(') left++;
//         else right++;
//     }

//     for(int ii = 0; ii < q; ii++) {
//         cin >> k;

//         if(n % 2) {nope; continue;}

//         if(s[k-1] == '('){
//             s[k-1] = ')';
//             left--;
//             right++;
//         }else {
//             s[k-1] = '(';
//             left++;
//             right--;
//         }

//         if((left - right) % 2) { nope; continue;}

//         if(s[0] == ')' || s[n-1] == '('){ nope; continue;}

//         if(left == right) if(isvalid(s,n)){ yup; continue;}

//         if(left < right) {
//             ll l = 0, r = 0;
//             bool checkf = 0, checkt = 0;
//             for(int i = 0; i < n - 1; i++) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l < r) {checkf = 1; break;}
//                 if(s[i] == '(' && s[i+1] == '(') { checkt = 1; break;}
//             }

//             if(checkf) { nope; continue;}
//             l = 0, r = 0;
            
//             for(int i = n - 1; i >= 1; i--) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l > r) { checkf=0; break;}
//             }
//             if(checkf) { nope; continue;}
//             if(checkt) { yup; continue;}

//         }else if (left > right) {
//             ll l = 0, r = 0;
//             bool checkf = 0, checkt = 0;
//             for(int i = n-1; i >= 1; i--) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l > r) {checkf = 1; break;}
//                 if(s[i] == ')' && s[i-1] == ')') { checkt = 1; break;}
//             }
//             if(checkf) { nope; continue;}

//             l=0, r=0;
//             for(int i = 0; i < n - 1; i++) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l < r) {checkf = 1; break;}
//             }

//             if(checkf) { nope; continue;}
//             if(checkt) { yup; continue;}

//         }else {
//             ll l = 0, r = 0;
//             bool checkf = 0, checkt = 0;
//             for(int i = 0; i < n - 1; i++) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l < r) {checkf = 1; break;}
//                 if(s[i] == '(' && s[i+1] == '(') { checkt = 1; break;}
//             }
//             if(checkf) { nope; continue;}

//             l=0, r=0;
//             for(int i = n-1; i >= 1; i--) {
//                 if(s[i] == '(') l++;
//                 else r++;
//                 if(l > r) {checkf = 1; break;}
//                 if(s[i] == ')' && s[i-1] == ')') { checkt = 1; break;}
//             }
            
//             if(checkf) { nope; continue;}
//             yup; continue;
//         }
//     }
// }

// //<=====================================================================>

// int main()
// {
//    fast_cin();
//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//    #endif
    
//     ll t = 1;
//     // cin >> t;
    
//     while( t-- ) {
//         shreyu();
//         // cout<<endl;
//     }
//     return 0;
// }
// //<=====================================================================>