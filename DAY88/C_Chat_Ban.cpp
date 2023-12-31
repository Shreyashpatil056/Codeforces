#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++) 
#define cout(a)  cout<<a<<endl;
#define cin(a)  cin>>a;
#define ll long long
#define mp make_pair
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define sum(a) long long sum=0
#define cnt(a) long long cnt=0
const ll mod=1e9;


 long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}
    int main(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);

       ll t;
       cin>>t;
       while(t--){
       int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool over = false;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (mid >= k) {
                over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
            } else {
                over = (get(mid) >= x);
            }
            if (over) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
   
       }
   return 0;
}
