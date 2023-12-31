//this code belongs to Shreyash Shriram Patil
//this code belongs to Shreyash Shriram Patil
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
#define sp " "
#define yup cout << "YES" << endl
#define nope cout << "NO" << endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to Shreyash Shriram Patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define max_ele(a) *max_element(a.begin(),a.end())
#define min_ele(a) *min_element(a.begin(),a.end())

//lcm finder 
ll find_lcm(ll a,ll b){ll p=__gcd(a,b); return (a*b)/p;}
//function to count number of bits in a binary number
unsigned countBits(unsigned int number){return (int)log2(number)+1;}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

ll exp(ll a, ll b, ll m){    ll res = 1;    while (b > 0)    {        if (b & 1)            res = (res * a) % m;        a = (a * a) % m;      b = b >> 1;   }  return res;}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
ll mprime(ll a, ll b) { return exp(a, b - 2, b); }
ll power(ll a,ll b){ll ans=1;while (b!=0){if(b&1){ans=(ans*a)%MOD;}a=(a*a)%MOD;b=b/2;}return ans;}
ll mod_add(ll a, ll b, ll m){  a = a % m;   b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m){ a = a % m;  b = b % m;  return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m){ a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m){    a = a % m;    b = b % m;    return (mod_mul(a, mprime(b, m), m) + m) % m;}

// debug functions 
void debug(ll x) {cout << "x: " << x << endl;}
void debug(ll x, ll y) {cout << "x y: " << x << sp << y << endl;}
void debug(ll x, ll y, ll z) {cout << "x y z: " << x << sp << y << sp << z << endl;}

// printing a vector 
void printv(v64 v) {
    cout << "v->[";
    for(ll i = 0; i < v.size(); i++) cout << v[i] << sp;
    cout << "]" << endl;
}

// printing a map 
void printm(map<char, ll> m) {
    cout << "{---" << endl;
    for(auto i : m) cout << i.fi << " " << i.se << endl;
    cout << "---}" << endl;
}

void printvp(vp64 vp) {
    cout << "{-vp-" << endl;
    for(auto i : vp) cout << i.fi << sp << i.se << endl;
    cout << "-vp-}" << endl;
}

v64 printPrimeFactors(int n) {
   v64 a;
   while (n%2 == 0){
      a.pb(2);
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         a.pb(i);
         n = n/i;
      }
   }
   if (n > 2){
        a.pb(2);
   }
    return a;
}


 void shreyu(){
    //input ->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
    ll n,c=9,one=0,zero=0;
    string s = "" , temp = "";
    cin>>n;
    v64 v;
    ll xx = 1;
     
    while(n>0){
        if(n%11==0 || n%111==0) {yup; return;}
        n-=111;
    }
    nope;
    //code->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    

    
    
    
 }
 
 int main()
 {
    fast_cin();
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll t = 1;
    cin >> t;
    
    while(t--) {
        shreyu();
        // cout<<endl;
    }
    return 0;
 }