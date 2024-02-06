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
        string a, b, c;
        cin >> a >> b >> c;
        int d_s = 0, d_d = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] && a[i] != c[i])
                d_s++;
            else if (a[i] != b[i] && a[i] != c[i] && b[i] != c[i])
            {
                d_d++;
            }
        }
        if (d_s > 0 || d_d > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}