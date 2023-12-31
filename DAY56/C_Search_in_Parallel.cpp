 #pragma GCC optimize("Ofast")
 #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 #pragma GCC optimize("unroll-loops")
 #include <bits/stdc++.h> 
 
 using namespace std;
 typedef long double ld;
 typedef long long ll;
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
 ll MOD = 998244353;
 ll mod = (1000 * 1000 * 1000 + 7);
 double eps = 1e-12;
 #define forn(i,e) for(ll i = 0; i < e; i++)
 #define forsn(i,s,e) for(ll i = s; i < e; i++)
 #define rforn(i,s) for(ll i = s; i >= 0; i--)
 #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
 #define ln "\n"
 #define dbg(x) cout<<#x<<" = "<<x<<ln
 #define mp make_pair
 #define pb push_back
 #define fi a1
 #define se a2
 #define INF 2e18
 #define sp " "
 #define yup cout << "YES" << endl
 #define nope cout << "NO" << endl
 #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 #define all(x) (x).begin(), (x).end()
 #define sz(x) ((ll)(x).size())
 #define max_ele(a) *max_element( a.begin(), a.end())
 #define min_ele(a) *min_element( a.begin(), a.end())
 ll find_lcm ( ll a, ll b){ ll p=__gcd(a,b); return (a * b ) / p ;}
 ll countBits ( ll number){ return (ll)log2(number)+1 ;}
 bool isPrime ( ll n){ if( n <= 1) return false; if( n <= 3) return true; if( n % 2 == 0|| n % 3 == 0) return false; for(ll i=5; i*i<=n; i=i+6) if(n%i==0|| n%(i+2)==0) return false; return true;}
 bool isPowerOfTwo(ll n){ if(n==0) return false; return (ceil(log2(n)) == floor(log2(n)));}
 bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
 ll exp(ll a, ll b, ll m){ ll res = 1; while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b = b >> 1; } return res ;}
//  bool sortbysec( const pair<ll,ll> &a,const pair<ll,ll> &b){ return (a.a2 < b.a2);}
 ll mprime(ll a, ll b) { return exp(a, b - 2, b); }
 ll power(ll a,ll b){ ll ans=1; while (b!=0){ if( b & 1){ ans=(ans*a) % MOD;} a= (a*a) %MOD; b=b/2;} return ans;}
 ll mod_add(ll a, ll b, ll m){ a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
 ll mod_mul(ll a, ll b, ll m){ a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
 ll mod_sub(ll a, ll b, ll m){ a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
 ll mod_div(ll a, ll b, ll m){ a = a % m; b = b % m; return (mod_mul(a, mprime(b, m), m) + m) % m;}
 ll binExp(ll a, ll b) { ll x = 1; while (b > 0) { if (b & 1) x = (x * a); a = (a * a); b >>= 1; } return x; }
 //ll fact[200007];
 //void factorial(){fact[0] = 1 ; for (ll i = 1 ; i < 200007 ; i++) fact[i] = (fact[i-1] * i) % mod;}
 void debug(ll x) {cout << "x: " << x << endl;}
 void debug(ll x, ll y) {cout << "x y: " << x << sp << y << endl;}
 void debug(ll x, ll y, ll z) {cout << "x y z: " << x << sp << y << sp << z << endl;}
 void printv(v64 v) {cout<<"v->[ ";for(ll i=0;i<v.size();i++)cout<<v[i]<<sp;cout<<"]"<<endl;}
//  void printm(map <char,ll> m){ cout<<"{---" << endl; for(auto i :m) cout<< i.fi <<" "<< i.se <<endl; cout<<"---}" << endl; }
//  void printvp(vp64 vp){ cout<<"{-vp-"<< endl; for(auto i : vp) cout<< i.fi << sp << /i.se << endl ; cout<<"-vp-}"<< endl; }
 v64 ppf(ll n){ v64 v ; while( n%2==0 ){ v.pb(2); n=n/2;} for(ll i =3;i <= sqrt(n); i =i+2){ while( n%i==0){ v.pb(i); n =n/i;}} if(n>2){ v.pb(n);} return v;}  //printprimefactors
 void printPrimeupto(ll n) { ll chk=0; for(ll i=1; i<=n; i++) { for(ll j=2; j<i; j++) { if(i%j==0) { chk++; break; }} if(chk==0 && i!=1) cout<<i<<sp; chk = 0; } cout<<endl; }
 v64 primepushVector(v64 v, ll n) { ll chk=0; for(ll i=1; i<=n; i++) { for(ll j=2; j<i; j++) { if(i%j==0) { chk++; break; }} if(chk==0 && i!=1) v.push_back(i); chk = 0; } return v; }
 
 
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
void shreyu(){
    ll n= 0, a1,a2,k= 0, c= 0, one= 0, zero= 0, mini= INT_MAX, maxi= 0 ;
    string s = "" , temp = "";
    cin>>n>>a1>>a2   ;
    v64 v ;
    vp64 vp;
    forn(i,n){
        ll xx;
        cin>>xx;
        v.pb(xx);
        vp.pb({xx,i+1});
    }

    // 3 - 4
    // 4- 5
    // 5- 6
    // 6 - 8

    // c = a1+a2;
    // maxi = max(a1,a2);
    // mini = min(a1,a2);
    // // maxi seconds mai c numbers ka kaam hota hai
    // ll a = n / c;  // 7 / 4 = 1 , reminder = 3;
    // ll rem = n % c; // rem = 3, ab rem ko mini se calculate karte hai
    // ll add = (rem + mini - 1) / mini ;// agar mini 2 hai to rem karne 4 sec lagte hai, so take ceiling

    // a+= rem;
    // a+=add; 

    // cout<< a * maxi<< add<< endl;

    // ll a1 = (a * maxi + add) /  maxi;
    // ll a2 = n - a1;
    // // ll a1 = (a * maxi + add) /  maxi;
    // // ll a2 = n - a1;

    // if(a2 > a1){
    //     swap(a1, a2);
    // }

    // ab tak maine 1st & 2nd robots ke size of tasks nikaal liye hai, ab 
    // bas usko order ke hisaab se lagaana hai 

    sort(all(vp));
    reverse(vp.begin(), vp.end());

    v64 v1;
    v64 v2;
    int i = 0;
    int j = 0;

    while(j < n){
        i++;
        if(i % a1 == 0 && i % a2 == 0){
            v1.pb(vp[j].second);
            j++;
            if(j<n) v2.pb(vp[j].second);
            j++;
        }else if(i % a1 == 0){
            v1.pb(vp[j].second);
            j++;
        }else if(i % a2 == 0){
            v2.pb(vp[j].second);
            j++;
        }else{
            continue;
        }
    }

    cout<<v1.size()<<" ";
    for(auto i: v1) cout<<i<<" ";
    cout<<endl;
    cout<<v2.size()<<" ";
    for(auto i: v2) cout<<i<<" ";
    cout<<endl;

    
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 

int main()
{
   fast_cin();
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
    
    ll t = 1;
    cin >> t;
    // t=1;
    while(t--) {
        shreyu();
        // cout<<endl;
    }
    return 0;
}