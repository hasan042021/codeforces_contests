#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fact_2(ll n)
{
    return (n * (n - 1) * (n - 2)) / 6;
}

ll fact_3(ll n)
{
    return (n * (n - 1)) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int a[n + 1];
        for (int i = 0; i <= n; i++)
        {
            a[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            ll b;
            cin >> b;
            a[b]++;
        }

        ll ans = 0;
        ll prev = 0;

        for (int i = 0; i <= n; i++)
        {
            if (a[i] >= 3)
            {
                ans += fact_2(a[i]);
            }

            if (a[i] >= 2)
            {
                ans += fact_3(a[i]) * prev;
            }

            prev += a[i];
        }

        cout << ans << endl;
    }

    return 0;
}