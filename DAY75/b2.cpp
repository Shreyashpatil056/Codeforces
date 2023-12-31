#include <bits/stdc++.h>
#define ll long long
using namespace std;

void soln() {
    ll one = 0, zero = 0;
    ll n = 0,c = 0;
    string s;
    cin >> s;
    n = s.size();
    for(auto i: s) {
        if(i == '0') zero++;
        else one++;
    }
    
    ll ghost = INT_MAX;
    ll lz = 0, lo = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '0') {
            lz++;
            zero--;
        }
        else {
            lo++;
            one--;
        }
        ghost = min(ghost, min(lz, lo) + min(zero, one));
    }
    cout<<ghost<<endl;
}

int main() {
    ll t;
    cin >> t; while(t--) 
    soln();
}
