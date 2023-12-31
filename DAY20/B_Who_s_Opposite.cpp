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
    int a,b,c;
    cin>>a>>b>>c;
    
    int d = abs(a-b);
    
    if(d*2 < a || d*2 < b || d*2 < c){
        cout<<-1<<ln;
        return;
    }
    if((a*2 == b || b*2 == a) && c > a && c > b){
        cout<<-1<<ln;
        return;
    }

    

    int ans1=c-d;
    int ans2=c+d;

    // if(a*2==c || c*2==a || b*2==c || c*2==b){
    //     cout<<-1<<ln;
    //     return;
    // }
    
    
    
    if(ans1 >0){
        if((ans1*2 == c || c*2 == ans1)&&(max(ans1,c)<a && max(ans1,c)<b)){
            cout<<-1<<ln;
            return;
        }
    }

 if(ans1==a || ans1 ==b){
        cout<<-1<<ln;
        return;
    }
    
    if(ans2==a || ans2 ==b){
        cout<<-1<<ln;
        return;
    }
    
    // if()
    
    if(ans2 >0){
        if((ans1*2 == c || c*2 == ans1)&&(max(ans1,c)<a && max(ans1,c)<b)){
            cout<<-1<<ln;
            return;
        }
        
        if(ans1<=0 && (ans2==c*2 && ans2<a && ans2<b)){
            cout<<-1<<ln;
            return;
        }
        
        if(max(max(a,b),max(c,ans2)) == ans2){
            if(a*2==ans2 || b*2 == ans2){
                
                ans2=0;
                
                // if(ans1>0){
                //     cout<<ans1<<endl;
                //     return;
                // }
                // cout<<-1<<ln;
                // return;
            }
        }
        
    }

    
    if(ans2==0){
        if(max(max(a,b),max(c,ans1)) % 2 == 1){
            cout<<-1<<ln;
            return;
        }
    }

   

    


    if(ans1>0 && ans1<=2*max(a,b)){
        cout<<ans1<<ln;
        return;
    }

    if(ans2>0 && ans2<=2*max(a,b)){
        cout<<ans2<<ln;
        return;
    }

    else{
        cout<<-1<<ln;
        return;
    }

    cout<<max(ans1,ans2);
    
    
    
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