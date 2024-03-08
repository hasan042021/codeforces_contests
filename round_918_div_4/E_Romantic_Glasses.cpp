#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        ll diff = 0;
        unordered_map<ll, ll> mp;
        mp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                diff += a[i];
            }
            else
            {
                diff -= a[i];
            }

            if (mp.count(diff))
            {
                int j = mp[diff];
                if (i - j >= 2)
                {
                    found = true;
                    break;
                }
            }
            else
            {
                mp[diff] = i;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}