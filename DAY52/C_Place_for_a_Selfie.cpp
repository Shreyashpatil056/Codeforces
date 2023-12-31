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
// #define INF 2e18
#define sp " "
#define yup cout << "YES" << endl
#define nope cout << "NO" << endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to Shreyash Shriram Patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define max_ele(a) *max_element(a.begin(),a.end())
#define min_ele(a) *min_element(a.begin(),a.end())

void shreyu(){

   ll n , m, one = 0 , zero = 0 ;
   cin>>n >>m   ;
   v64 slopes ;
   forn(i,n){
       ll xx;
       cin>>xx;
       slopes.pb(xx);
   }

    sort(all(slopes));
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        bool f = false;
        ll ub = upper_bound(all(slopes),b) - slopes.begin();
        ll lb = ub - 1;
        ll d = min(abs(slopes[ub]-b) , abs(slopes[lb]-b));
        if(d*d < 4*a*c){
            cout<<"YES"<<endl;
            f = true;
            if(d == abs(slopes[ub]-b) ){
                cout<<slopes[ub]<<endl;
            }else{
                cout<<slopes[lb]<<endl;
            }
        }
        if(f)continue;
        cout<<"NO"<<endl;
    }
cout<<endl;

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