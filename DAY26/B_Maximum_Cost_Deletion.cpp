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
    int n ,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    if(b>=0){
        cout<<n*(a+b)<<ln;
        return;
    }

    ll ct1=0,ct2=0,i=0;

    while(i<n){
        char dd = s[i];

        while(i<n and s[i]==dd){
            i++;
        }

        if(dd=='0'){
            ct1++;
        }
        else{
            ct2++;
        }



    }

    ll op = min(ct1,ct2)+1;
    cout<<n*a + (op)*b<<ln;


    // int ans = 0;
    // int zero= 0,one=0;

    // for(int i=0;i<n;i++){
    //     if(s[i]=='0'){
    //         zero++;
    //     }
    //     else{
    //         one++;
    //     }
    // }

    // if(a>=0 && b>=0){
    //     ans+= n*(a + b);
    //     cout<<ans<<ln;
    //     return;
    // }

    //     if(a<0 && b>=0){

    //         //5 -3 5
    //         //11001 = +10
    //         //-1 + 4 = 3


    //         ans+= n*(a+b);
    //         cout<<ans<<ln;
    //         return;
    //     }
    //     // marr gaya mc la la.... la la la laa laa laaaaa.........
    //     // m
    //     if(a>=0 && b<0){
    //         int kami = min(zero,one);
    //         char k;
    //         if(kami==zero){
    //             k = '0';
    //         }else{
    //             k = '1';
    //         }

    //         // removal of kami 
    //         // marra gaya mc 
    //         int c=0; 
    //         for( int i=0;i<n;i++){
    //             //9 1 -4
    //             //011011000 ==> 0011000
    //             if(s[i]==k){
    //                 while(s[i]==k && i<n){
    //                     c++;
    //                     i++;
    //                 }
    //                 ans+=c*a+ b;
    //                 s.erase(i-c,c);
    //                 i = i-c;
    //                 c=0;
    //             }
    //         }   
    //         // cout<<s<<" ";

    //         //removal of remaining
    //         int jasti = max(zero,one);

    //         ans+= jasti*a+b;
    //         cout<<ans<<ln;

    //     }


        
    
    
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