#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        forI(i, 0, n) cin >> a[i];
        bool ok = true;
        vector<int> idxs;
        i = 0;
        forI(i, 1, n - 1)
        {
            if (a[i - 1] == a[i + 1] && a[i] != a[i - 1])
            {
                ok = false;
                if (a[i] != a[0])
                    idxs.push_back(i);
            }
        }
        if (ok)
            cout << -1 << endl;
        else
        {
            int sz = idxs.size();
            if (sz == 1)
                cout << min(idxs[0], n - 1 - idxs[0]) << endl;
            else
            {
                int mn = idxs[0];
                i = 0;
                forI(i, 1, sz) mn = min(mn, idxs[i] - idxs[i - 1] - 1);
                mn = min(mn, n - 1 - idxs[sz - 1]);
                cout << mn << endl;
            }
        }
    }
    return 0;
}