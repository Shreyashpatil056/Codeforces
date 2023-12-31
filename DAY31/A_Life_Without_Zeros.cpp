//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 #include <string>
 #include<math.h>
 #include<iostream>
//  #iostream<iostream>
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
 
ll f(ll n){
    ll temp = n;
    ll count=0;
    ll a=0;

    while(temp){
        int rem = temp%10;
        if(rem!=0){
             a = a + (pow(10, count) * rem);
             count++;
        }
        temp/=10;
    }

    return a;



}

void shreyu(){
    ll a,b;
    cin>>a>>b;

    ll  c, c1;
    c=(a+b);
    c = f(c);

    c1=f(a)+f(b);

    if(c==c1){
        cout<<"YES"<<ln;
}
    else{
        cout<<"NO"<<ln;
    }



}


//  void shreyu(){
//     // int n 
//     // cin>>n
//     string s1,s2;
//     cin>>s1>>s2;
//     ll sum = stoi(s1)+stoi(s2);

//     string s3 = to_string(sum);
//     ll n=s3.length();

    // for(ll i = 0 ; i < n ; i++){
    //     if(s3[i]=='0'){
    //         s3.erase(s3.begin()+i);
    //         // mm--;
    //         // zero++;
    //     }
    // }
    // sum = stoi(s3);

    // n = s1.length();
    // for(ll i = 0 ; i < n ; i++){
    //     if(s1[i]=='0'){
    //         s1.erase(s1.begin()+i);
            // mm--;
            // zero++;
        // }
    // }
    // ll m = s2.length();
    // for(ll i = 0 ; i < m ; i++){
    //     if(s2[i]=='0'){
    //         s2.erase(s2.begin()+i);
    //         // mm--;
    //         // zero++;
    //     }
    // }

    // ll sum1 = stoi(s1)+stoi(s2);

    // if(sum == sum1){
    //     cout<<"YES"<<ln;
    // }
    // else{
    //     cout<<"NO"<<ln;
    // }
    


    


    // int m=s2.length();
    // int nn=n,mm=m;
    // int zero = 0;
    // for(int i = 0 ; i < n ; i++){
    //     if(s1[i]=='0'){
    //         s1.erase(s1.begin()+i);
    //         nn--;
    //         zero++;
    //     }
    // }
    // for(int i = 0 ; i < m ; i++){
    //     if(s2[i]=='0'){
    //         s2.erase(s2.begin()+i);
    //         mm--;
    //         zero++;
    //     }
    // }

    // if(zero == 0){
    //     ll a = stoi(s1);
    //     ll b = stoi(s2);
    //     ll c = a+b;

    //     string c1 = to_string(c);

    //     for(int i = 0 ; i < c1.size() ; i++){
    //         if(c1[i]=='0'){
    //             cout<<"NO";
    //             return;
    //         }
    //     }
    //     // cout<<
    //     cout<<"YES";
    //     return;

    // }

    // // cout<<s1<<" "<<s2;
    // reverse(s1.begin(),s1.end());
    // reverse(s2.begin(),s2.end());

    // if(nn!=mm){
    //     cout<<"NO";
    //     return;
    // }

    // for(int i=0;i<min(nn,mm);i++){
    //     int p = s1[i]-'0';
    //     int q = s2[i]-'0';

    //     if(p+q>=10){
    //         // cout<<p+q<<" ";
    //         cout<<"NO";
    //         return;
    //     }

    // }
    // cout<<"YES";
    
    
//  }
 int main()
 {
    fast_cin();
    // ll t;
    // cin >> t;
    // while(t--) {
        shreyu();
    // }
    return 0;
 }