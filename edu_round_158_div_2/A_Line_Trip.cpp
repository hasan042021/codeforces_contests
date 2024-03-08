#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
        {
            int mx = max(a[0] - 0, (x - a[0]) * 2);
            cout << mx << endl;
        }
        else
        {
            int mx = a[0] - 0;
            for (int i = 1; i < n; i++)
            {
                mx = max(a[i] - a[i - 1], mx);
            }
            mx = max(mx, (x - a[n - 1]) * 2);
            cout << mx << endl;
        }
    }
    return 0;
}