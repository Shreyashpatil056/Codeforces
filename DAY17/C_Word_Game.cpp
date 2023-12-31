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
    int n ;
    cin>>n;
    string arr[n];
    string brr[n];
    string crr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        cin>>crr[i];
    }
    

int a=3*n,b=3*n,c=3*n;
int flag,clag;
// COMPARE 1ST WITH 2ND   
flag = 0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]){
                // a++;
                // b++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(arr[i]==crr[k]){
                        a-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    a-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     a+=2;
        // }
    }

flag = 0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                // a++;
                // b++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(brr[i]==crr[k]){
                        b-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    b-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     b+=2;
        // }
    }

// COMPARE 1ST WITH 3RD
flag=0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==crr[j]){
                // a++;
                // c++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(arr[i]==brr[k]){
                        a-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    a-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     a+=2;
        // }
    }
flag=0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(crr[i]==arr[j]){
                // a++;
                // c++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(crr[i]==brr[k]){
                        c-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    c-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     c+=2;
        // }
    }

//COMPARE 2ND WITH 3RD
flag=0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==crr[j]){
                // b++;
                // c++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(brr[i]==arr[k]){
                        b-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    b-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     b+=2;
        // }
    }
flag=0;
clag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(crr[i]==brr[j]){
                // b++;
                // c++;
                // flag = 1;
                // break;
                for(int k=0;k<n;k++){
                    if(crr[i]==arr[k]){
                        c-=3;
                        clag=1;
                    }
                }
                if(clag==0){
                    c-=2;
                }
                break;
            }
        }
        // if(flag==0){
        //     c+=2;
        // }
    }

    if(a>=0 && b>=0 && c>=0){
            cout<<a<<" "<<b<<" "<<c<<ln;

    }

    else{
        a*=2;
        b*=2;
        c*=2;
        cout<<abs(a)<<" "<<abs(b)<<" "<<abs(c)<<ln;
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