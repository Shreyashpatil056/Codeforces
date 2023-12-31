//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to Shreyash Shriram Patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;
typedef vector<vector<ll> > vv64;
void shreyu(){
   //input ->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
   ll n=3 ,a,b,c, one = 0 , zero = 0 ;
   cin>>a>>b>>c   ;
   cout<<4*( sqrt(a*b/c) + sqrt(b*c/a) + sqrt(a*c/b));
}

int main()
{
   // fast_cin();
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
   
   ll t = 1;
//    cin >> t;
   
   while(t--) {
       shreyu();
       // cout<<endl;
   }
   return 0;
}