#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int> v(n);
        int zero_ct = 0 ,one_ct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero_ct++;
            if (v[i] == 1)
                one_ct++;
        }
        if (zero_ct = ((n + 1) / 2))
            cout << 0 << endl;
        else if (n - (zero_ct + one_ct) || zero_ct == n)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}