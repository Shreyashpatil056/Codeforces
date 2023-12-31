#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
//<=====================================================================>





//<=====================================================================>
int solution(vector<int> v, int x, int y) {
    int n = v.size();

    int mini = INT_MAX;
    int sum = 0;

    int dp[n];
    memset(dp, -1, sizeof(dp));

    for(int i=0; i<n; i++) {
        if(i + (x * y) >= n) break;
        if(i-y >= 0 && dp[i] != -1) {
            sum = dp[i-y] + v[x*y];
        }
        
        sum = 0;
        int c =0;
        for(int j=i; j<n; j += y) {
            sum += v[j];
            c++;
            if(c == x) break;
        }   
        mini = min(mini, sum);
    }
    cout << mini << endl;
}
//<=====================================================================>


int main() {
    ll t;
    // cin >> t; while(t--) 
    int n ;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int x, y;
    cin >> x >> y;
    solution(v, x, y);
    return 0;
}
//<=====================================================================>