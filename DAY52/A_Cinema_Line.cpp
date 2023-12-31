#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<pair<ll, ll>> vp64;
typedef vector<vector<ll>> vv64;

#define fori(n) for (ll i = 0; i < n; i++)
#define fori1(n) for (ll i = 1; i <= n; i++)
#define forj1(n) for (ll j = 1; j <= n; j++)
#define forj(n) for (ll j = 0; j < n; j++)
#define forsn(i, s, n) for (ll i = s; i < n; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size())
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool sortbysec(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second < b.second);
}

ll factorial(ll num)
{

    return (num == 1 or num == 0) ? 1 : num * factorial(num - 1);
}

string decToBinary(int n)
{
    int binaryNum[16];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string st = "";

    for (int j = i - 1; j >= 0; j--)
        st.push_back(binaryNum[j] + '0');

    return st;
}

bool isprime(ll x)
{
    if (x == 2)
    {
        return 1;
    }
    else if (x == 1)
    {
        return 0;
    }

    for (ll i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    ll n;
    cin>>n;

    v64 v(n);
    fori(n){
        cin>>v[i];
    }

    ll t25 =0,t50=0,t100=0;
    

    fori(n){
        if(v[i]==25){
            t25++;
        }
        else if(v[i]==50 and t25>0){
            t25--;
            t50++;
        }
        else if(v[i]==100){
            if(t50>=1 and t25>=1){
                t50--;
                t25--;
            }
            else if(t25==0){
                cout<<"NO\n";
                return;
            }
            else if(t50==0 and t25>2){
                t25-=3;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        else{
            cout<<"NO\n";
            return;

        }
    }
    cout<<"YES\n";

    

    
}
int main()
{
    // fast_cin();
    

        solve();
    

    return 0;
}