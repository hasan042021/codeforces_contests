#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        deque<ll> a(n), b(m);
        vector<int> v;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());

        while (!a.empty() && !b.empty())
        {
            ll x = abs(b.back() - a.back());
            ll y = abs(b.front() - a.front());

            if (x > y)
            {
                v.push_back(x);
                b.pop_back();
                a.pop_back();
            }
            else
            {
                v.push_back(y);
                a.erase(a.begin());
                b.erase(b.begin());
            }
        }

        ll dif = accumulate(v.begin(), v.end(), 0LL);
        cout << dif << endl;
    }

    return 0;
}
