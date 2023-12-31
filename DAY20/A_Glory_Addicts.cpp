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
    int arr[n];
    int brr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
        s+=brr[i];
    }
    
    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v1.pb(brr[i]);
        }
        else{
            v2.pb(brr[i]);
        }
    }


    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());

    int n1=v1.size();
    int n2=v2.size();
    
    ll ans=0;
    
    if(n1==0){
        for(int i=0;i<n2;i++){
            ans+=v2[i];
        }
        cout<<ans<<ln;
        return;
    }
    if(n2==0){
        for(int i=0;i<n1;i++){
            ans+=v1[i];
        }
        cout<<ans<<ln;
        return;
    }

    if(n1==n2){
        sort(brr,brr+n);
        s = (2 * s) - brr[0];
        
        // ans+=min(v1[n1-1],v2[n2-1]);
        cout<<s<<ln;
        return;
    }

    if(1){
        int mini=min(n1,n2);
        // int d = n2-n1;
        int p=0,q=0;
        // for(int i=0;i<2*n1;i++){
        //     if(v1[p]>v2[q]){
        //         ans+=2*v1[p];
        //         p++;
        //     }else{
        //         ans+=2*v2[q];
        //         q++;
        //     }
        // }

        for(int i=0;i<mini;i++){
            s+=v1[i];
            s+=v2[i];
        }
        
        
        cout<<s<<ln;
        return;

    }

    // if(n1>n2){
    //     int d = n1-n2;
    //     int p=0,q=0;
    //     // for(int i=0;i<2*n2;i++){
    //     //     if(v1[p]>v2[q]){
    //     //         ans+=2*v1[p];
    //     //         p++;
    //     //     }else{
    //     //         ans+=2*v2[q];
    //     //         q++;
    //     //     }
    //     // }

    //     for(int i=0;i<n2;i++){
    //         ans+=2*v1[i];
    //         ans+=2*v2[i];
    //         p=i;
    //     }
    //      int i=p+1;
    //     if(p==0){
    //         i==0;
    //     }
    //     for(;i<n2;i++){
    //         ans+=v1[i];
    //     }
        
    //     cout<<ans<<ln;
    //     return;

    // }
    


    
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