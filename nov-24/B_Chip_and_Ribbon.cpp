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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
            cout << a[0] - 1 << endl;
        else if (n == 2)
        {
            cout << max(a[0], a[1]) - 1 << endl;
        }
        else
        {
            long long cnt = 0;
            long long mx = a[0];
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i - 1] >= a[i] && a[i] < a[i + 1])
                {
                    cnt += (mx - 1);
                    if (a[i] == 0 && a[i - 1] != 0)
                        cnt++;
                }

                if (a[i] > a[i - 1])
                {
                    mx = a[i];
                }
            }
            if (a[n - 1] < mx)
                cnt += (mx - 1);
            cout << cnt << endl;
        }
    }
    return 0;
}