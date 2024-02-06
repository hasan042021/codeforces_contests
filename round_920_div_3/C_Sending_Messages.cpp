#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, charge, b, c;
        cin >> n >> charge >> b >> c;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool ok = true;
        ll time = 0;
        for (int i = 0; i < n; i++)
        {

            charge -= min((a[i] - time) * b, c);
            if (charge <= 0)
            {
                ok = false;
                break;
            }
            time = a[i];
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}