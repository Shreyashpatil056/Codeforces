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
    int arr[3];
    int arr1[3];
    int sum=0,sum2=0;
    for(int i=0;i<3;i++){
         cin>>arr[i] ; 
        arr1[i] = arr[i];
    }

    

    sort(arr,arr+3,greater<>());
    sort(arr1,arr1+3,greater<>());
    if(arr[1]+arr[2]<=arr[0]){
        cout<<arr[1]+arr[2]<<ln;
        return;
    }
    // for 10 9 8 case
    if(arr[0]/2 <= arr[1] && arr[0]/2 <= arr[2]){
        sum2+=arr[0]/2;
        arr[1]-=(arr[0]-arr[0]/2);
        sum2+=arr[0]-arr[0]/2;
        arr[2]-=arr[0]/2;
        //here, arr[0]==0; so add the remainining ones
        sum2+=min(arr[1],arr[2]);
    }

    //9 9 6  = 0
    //6 5 5  = 4
    //5 3 2  = 3
    //3 2 1  = 2
    //2 1 1  = 1
    //1 1 0  = 1
    //0 0 0  = 1---------------
    //10 9 8 = 0
    //8 5 5  = 5
    //5 4 1  = 4
    //3 2 1  = 2
    //2 1 1  = 1
    //1 1 0  = 1
    //+1 

    //1 1 6
    //8 1 4
    //8 4 1
    //4 0 1 = 4
    //10 4 3
    //6 3 0 = 4
    //3 0 0 = 3

    while(arr1[0]>=2 && arr1[1]>=2){
        // cout<<arr[0]<<" "<<arr[1]<<ln;
        // int div = arr[0]/2;
        int add = arr1[0]/2;
        if(add>arr1[1]){
            add = arr1[1];
        }
        sum+=add;
        arr1[0] -= add;
        arr1[1] -= add;
        sort(arr1,arr1+3,greater<>());
    }
    
    if(arr1[0]==1 || arr1[2]==0){
        sum+=1;
    }else {
        sum+=2;
    }
    cout<<max(sum,sum2)<<ln;


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