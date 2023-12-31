#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;
// using std::cin;
// using std::cout;
// using std::endl;
// using std::vector;

typedef long long ll;

const int MOD = 998244353;
const int mod = (1000 * 1000 * 1000 + 7);
const double eps = 1e-12;

void shreyu() {
    ll n, k, c = 0;
    cin >> n >> k;
    vector<ll> v(k);
    ll mini = 0, maxi = 0;
    // cout<<100000000000<<endl;
    if(n == k) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if(n == k + 1) {
        cout << 1 << " " << 1 << endl;
        return;
    }
    if(k == 1) {
        cout << n * (n - 1) / 2 << " " << n * (n - 1) / 2 << endl;
        return;
    }

    ll d = n / k;
    ll r = n % k;

    // for maxi
    ll nn = n;
    ll kk = k;

    nn -= kk - 1;
    maxi += nn * (nn - 1) / 2;

    // for mini
    ll p = n / k;
    nn = n;
    kk = k;

    d = nn / kk;
    r = nn % kk;
    for(int i = 0; i < kk; i++) {
        v[i] = d;
    }
    for(int i = 0; i < r; i++) {
        v[i]++;
    }
    for(int i = 0; i < kk; i++) {
        mini += v[i] * (v[i] - 1) / 2;
    }
    cout << mini << " " << maxi << endl;
}

int main() {
    // std::ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif

    ll t = 1;
    cin >> t;
    while(t--) {
        shreyu();
    }
    return 0;
}
