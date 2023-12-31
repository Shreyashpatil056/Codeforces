 #pragma GCC optimize("Ofast")
 #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 #pragma GCC optimize("unroll-loops")
 #include <bits/stdc++.h> 
 
 /*       Author: Shreyash Shriram Patil (shreyash_256)       */ 
 
 using namespace std;
 typedef long long ll;
 typedef long double ld;
 typedef pair<ll, ll> p64;
 typedef pair<int, int> p32;
 typedef pair<double, double> pdd;
 typedef vector<ll> v64;
 typedef vector<int> v32;
 typedef vector<vector<ll> > vv64;
 typedef vector<vector<int>> vv32;
 typedef vector<vector<p64>> vvp64;
 typedef vector<p32> vp32;
 typedef vector<p64> vp64;
 ll mod = (1000 * 1000 * 1000 + 7);
 ll MOD = 998244353;
 double eps = 1e-12;
 #define rforsn(i,s,e) for( ll i = s; i >= e; i--)
 #define rforn(i,s)    for( ll i = s; i >= 0; i--)
 #define forsn(i,s,e)  for( ll i = s; i < e; i++)
 #define forn(i,e)     for( ll i = 0; i < e; i++)
 #define ln "\n"
 #define dbg(x) cout<<#x<<" = "<<x<<ln
 #define mp make_pair
 #define pb push_back
 #define fi first
 #define se second
 #define int long long
 #define ret return
 #define cont continue
 #define ub upper_bound
 #define lb lower_bound
 #define sp " "
 #define INF 2e18
 #define line cout  <<         endl
 #define p0 cout    << 0       << endl
 #define pm1 cout   << -1      << endl
 #define nope cout  << "NO"    << endl
 #define yup cout   << "YES"   << endl
 #define alice cout << "ALICE" << endl
 #define bob cout   << "BOB"   << endl
 #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 #define all(x) (x).begin(), (x).end()
 #define sz(x) ((ll)(x).size())
 #define max_ele(a) *max_element( a.begin(), a.end())
 #define min_ele(a) *min_element( a.begin(), a.end())
 ll find_lcm          ( ll a, ll b)      { ll p = __gcd(a,b); return (a * b ) / p ;}
 ll countBits         ( ll number )      { return (ll) log2(number) + 1 ;}
 bool isPrime         ( ll n      )      { if( n <= 1) return false     ; if( n <= 3) return true; if( n % 2 == 0|| n % 3 == 0) return false; for(ll i=5; i*i<=n; i=i+6) if(n%i==0|| n%(i+2)==0) return false; return true;}
 bool isPowerOfTwo    ( ll n      )      { if( n == 0) return false     ; return (ceil(log2(n)) == floor(log2(n)));}
 bool isPerfectSquare ( ll x      )      { if ( x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
 ll   exp             (ll a, ll b, ll m) { ll res = 1; while (b > 0)    { if (b & 1) res = (res * a) % m; a = (a * a) % m; b = b >> 1; } return res ;}
 bool sortbysec ( const pair <ll,ll> &a, const pair <ll,ll> &b)         { return ( a.second < b.second);}
 ll mprime  (ll a, ll b)       { return exp ( a, b - 2, b);   }
 ll power   (ll a, ll b)       { ll ans = 1; while (b != 0)   {if( b & 1) { ans = (ans * a) % MOD;} a= (a*a) %MOD; b=b/2;} return ans;}
 ll mod_add (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
 ll mod_mul (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
 ll mod_sub (ll a, ll b, ll m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
 ll mod_div (ll a, ll b, ll m) { a = a % m; b = b % m; return (mod_mul(a, mprime(b, m), m) + m) % m;}
 ll binExp  (ll a, ll b)       { ll x = 1; while (b > 0)      { if (b & 1) x = (x * a); a = (a * a); b >>= 1; } return x; }
 // ll fact[200007];
 // void factorial()               { fact[0] = 1 ; for (ll i = 1 ; i < 200007 ; i++) fact[i] = (fact[i-1] * i) % mod;}
 void debug    (ll x             ) { cout << "x: "     << x << endl;}
 void debug    (ll x, ll y       ) { cout << "x y: "   << x << sp << y << endl;}
 void debug    (ll x, ll y, ll z ) { cout << "x y z: " << x << sp << y << sp << z << endl;}
 void printv   (v64 v            ) { cout << "v->[ "; for (ll i = 0 ; i < v.size(); i++) cout    << v[i] << sp  ; cout<<"]"    << endl; }
 void printm   (map <char, ll> m ) { cout << "{---" << endl; for(auto i : m) cout  << i.fi <<" " << i.se << endl; cout<<"---}" << endl; }
 void printm   (map <ll ,ll> m   ) { cout << "{---" << endl; for(auto i : m) cout  << i.fi <<" " << i.se << endl; cout<<"---}" << endl; }
 void printvp  (vp64 vp          ) { cout << "{-vp-"<< endl; for(auto i : vp) cout << i.fi << sp << i.se << endl; cout<<"-vp-}"<< endl; }
 v64  ppf      (ll n             ) { v64 v ; while ( n % 2 == 0 ){ v.pb(2); n = n / 2;} for(ll i = 3; i <= sqrt(n); i += 2) { while ( n % i == 0) { v.pb(i); n = n/i;}} if(n > 2){ v.pb(n);} return v;}  // printprimefactors
 void printPrimeupto (ll n       ) { ll chk = 0; for( ll i = 1; i <= n; i++) { for(ll j = 2; j < i; j++) { if( i % j == 0)  { chk++; break; }} if( chk == 0 && i != 1) cout<<i<<sp; chk = 0; } cout << endl; }
 v64  primepushVector(v64 v, ll n) { ll chk = 0; for( ll i = 1; i <= n; i++) { for(ll j = 2; j < i; j++) { if( i % j == 0)  { chk++; break; }} if( chk == 0 && i !=1 ) v.pb(i); chk = 0; } return v; }
//<=====================================================================>
 
 bool f(v64 &v1, v64 &v2, int mid){
    int n = v1.size();
    bool f = 1;
    for(int i=mid; i<n; i++){
        if(v1[i] >= v2[i - mid]) f = 0;
    }

    return f;
 }
 
 
//<=====================================================================>
void shreyu() {
    ll n, m, k, c;
    cin >> n >> m;

    v64 v, v2;
    v.pb(1);

    forn(i, n - 1) {
        ll xx;
        cin >> xx;
        v.pb(xx);
    }

    forn(i, n) {
        cin >> c;
        v2.pb(c);
    }

    sort(all(v));
    sort(all(v2));

    reverse(all(v));
    reverse(all(v2));

    c = 0;
    
    forn(i, v.size()) {
        if (v[i] >= v2[i]) c++;
    }

    int start = 0, end = c;
    int ans = 0;
    while(start <= end){
        int mid = (start + end) / 2;
        if(f(v, v2, mid)) {
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    cout << ans << endl;
    ret;

    priority_queue<int> pq1(all(v));
    priority_queue<int, vector<int>, greater<int>> pq2(all(v2));

    while (v.size() && c > 0 && ans < n) {
        int cc = c / 2;
        if (cc == 0)
            cc++;
        ans += cc;

        while (cc--) {
            pq1.pop();
            pq2.pop();
        }

        if (pq1.empty())
            break;

        v.clear();
        v2.clear();

        while (!pq1.empty()) {
            m = pq1.top();
            pq1.pop();
            v.pb(m);
        }

        while (!pq2.empty()) {
            m = pq2.top();
            pq2.pop();
            v2.pb(m);
        }

        sort(all(v));
        sort(all(v2));

        reverse(all(v));
        reverse(all(v2));

        c = 0;

        forn(i, v.size()) {
            if (v[i] >= v2[i])
                c++;
        }
        
        for(auto &i :v) pq1.push(i); 
        for(auto &i :v2) pq2.push(i); 
    }

    cout << ans << endl;
}
// 9 8 7 6 5 4 3 2 1
// 6 5 5 4 3 2 2 1 1

// 4 3 3 2 2 1 1 1
// 3 3 3 3 1 1 1 1

//<=====================================================================>

signed main()
{
   fast_cin();
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
    
    ll t = 1;
    cin >> t;
    
    while( t-- ) {
        shreyu();
        // cout << endl;
    }
    return 0;
}
//<=====================================================================>

// 3 2 1
// 4 3 2