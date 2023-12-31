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
 
//     int dp[1001][1001];

//     int longestPalindromicSequence(string &s1, string &s2 ,int n1, int n2){
//         if(n1 == 0 || n2 == 0){
//             return 0;
//         }
//         if(dp[n1][n2] != -1){
//             return dp[n1][n2];
//         }
//         if(s1[n1-1] == s2[n2-1] ){
//             return dp[n1][n2] = 1 + longestPalindromicSequence(s1,s2,n1-1,n2-1); 
//         }
//         else{
//             return dp[n1][n2] = max ( longestPalindromicSequence(s1,s2,n1-1,n2),
//                                 longestPalindromicSequence(s1,s2,n1,n2-1));
//         }
//     }

//     bool isPalindrome(string S)
// {
//     // Stores the reverse of the
//     // string S
//     string P = S;
 
//     // Reverse the string P
//     reverse(P.begin(), P.end());
 
//     // If S is equal to P
//     if (S == P) {
//         // Return "Yes"
//         return true;
//     }
//     // Otherwise
//     else {
//         // return "No"
//         return false;
//     }
// }
 


 void shreyu(){
    ll n ;
    cin>>n;

    string s;
    cin>>s;

    ll ans = INT_MAX;
    bool ch;
    ll cnt =0;

    ll i=0 , j = n-1;

    for(ll c=0;c<26;c++){
        cnt=0;
        i=0;
        j=n-1;

        while(i<=j){
            if(s[i] == s[j]){
                i++; j--;
            }else if(s[i] == char('a'+c)){
                i++; cnt++;
            }else if(s[j] == char('a'+c)){
                j--; cnt++;
            }else{
                cnt = n+1; break;
            }
        }
        ans = min(ans,cnt);
    }
    
    if(ans==n+1){
        cout<<-1<<ln;
    }else{
        cout<<ans<<ln;
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