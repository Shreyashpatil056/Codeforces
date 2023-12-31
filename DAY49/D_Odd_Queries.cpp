#include<bits/stdc++.h>
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
#define sp " "
#define yup cout << "YES" << endl
#define nope cout << "NO" << endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// void shreyu(){
//    //input ->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
//    ll n ,q,a,b, k,c = 0 , one = 0 , zero = 0 ;
//    string s = "" , temp = "";
//    cin>>n  >>q  ;
//    v64 v ;
//    forn(i,n){
//        ll xx;
//        cin>>xx;
//        xx%=2;
//        v.pb(xx);
//        one+=xx;
//    }
//    bool oddhai = false;
//    if(one%2==1)oddhai = true;
//    while(q--){
//         int sum = 0,sum1=0;
//         cin>>a>>b>>k;
//         for(int i = a-1; i<=b-1; i++){
//             sum+=v[i];
//         }
//         for(int i = a-1; i<=b-1; i++){
//             sum1+=k;
//         }
//         if(oddhai){
//             if(sum%2 == sum1%2){
//                 yup;
//             }else{
//                 nope;
//             }
//             return;
//         }
//         if(sum%2 == sum1%2){
//             nope;
//         }else{
//             yup;
//         }
//    }
// }
void shreyu(){
	ll n,q,pp = 0;
	cin>>n>>q;
    int ad = 0;
	vector <ll> arr(n);
    ad--;
	vector <ll> jjobd(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
        ad++;
		jjobd[i]=arr[i];
		if(i!=0){
			jjobd[i] = jjobd[i-1]+arr[i];
		}
		ad+=10;
	} 
	ll total=jjobd[n-1];

	while(q--){
		ll a,b,k;
        ad++;
		cin>>a>>b>>k;
		a--;b--;
        ad--;
		ll cutttt = jjobd[b];
		if (a!=0) cutttt -=jjobd[a-1];
		ad++;
		ll rem_sum = total - cutttt;
        ad+=10;
		rem_sum+=(k*(b-a+1));
        while(ad>0){
            ad-=100;
        }
		if(rem_sum%2){
            ad++;
			cout<<"YES"<<endl;
		}
		else{
            ad--;
			cout<<"NO"<<endl;
		}
	}
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