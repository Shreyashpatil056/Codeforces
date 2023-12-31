#include <bits/stdc++.h>

// A-z==65-90   a-z==97-122
#define MOD 1000000007
#define pb push_back
#define eb emplace_back
#define sz size()
#define le length()
#define PI 3.1415926535897932384626
typedef long long ll;
typedef unsigned long long int ull;
#define f first
#define s second
#define deb(x) cout << #x << ' ' << x << endl;
#define max_ele(a) *max_element(a.begin(), a.end())
#define min_ele(a) *min_element(a.begin(), a.end())
using namespace std;
// lcm finder
ll find_lcm(ll a, ll b)
{
    ll p = __gcd(a, b);
    return (a * b) / p;
}
// function to count number of bits in a binary number
unsigned countBits(unsigned int number) { return (int)log2(number) + 1; }
// decimal to binary calculator
string decToBinary(int n)
{
    string s;
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
    }
    return s;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b != 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;
    }
    return ans;
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> rem;
    vector<bool> check(n + 1, false);
    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= n && check[v[i]]==false)
        {
            check[v[i]]=true;
        }
        else{
            rem.pb(v[i]);
        }
    }
    ll j=0;
    for (ll i = 1; i <=n; i++)
    {
        if(check[i]==false)
        {
            ll todivide=rem[j]-i;
            if( rem[j]%todivide!=i )
            {
                cout<<-1<<endl;
                return;
            }
            else{
                j++;
            }
        }
    }
    cout<<rem.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}