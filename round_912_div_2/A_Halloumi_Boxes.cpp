#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            bool ok = true;
            for (int i = 1; i < n; i++)
            {
                if (a[i] < a[i - 1])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                cout << "YES" << endl;
            else
            {
                if (k == 1)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}