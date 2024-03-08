#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll p = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p *= a;
        }
        if ((2023 % p) != 0)
            cout << "NO" << endl;
        else
        {
            int r = 2023 / p;
            cout << "YES" << endl;
            cout << r << " ";
            for (int i = 0; i < k - 1; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}