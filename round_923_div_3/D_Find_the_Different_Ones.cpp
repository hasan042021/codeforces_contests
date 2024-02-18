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
        int a[n], b[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        b[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = i + 1;
            if (a[i] == a[i + 1])
                b[i] = b[i + 1];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;

        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            if (b[l - 1] >= r)
                cout << -1 << " " << -1 << endl;
            else
                cout << l << " " << b[l - 1] + 1 << endl;
        }
        cout << endl;
    }
    return 0;
}