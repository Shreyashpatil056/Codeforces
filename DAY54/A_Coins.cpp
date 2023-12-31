#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if (k % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if (k <= n)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}