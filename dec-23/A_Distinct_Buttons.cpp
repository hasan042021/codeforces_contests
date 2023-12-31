#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v[i] = {a, b};
        }
        sort(v.begin(), v.end());
        int L = 0, R = 0, D = 0, U = 0;
        int xi = 0, yi = 0;
        for (int i = 0; i < n; i++)
        {
            int x = v[i].first, y = v[i].second;
            if (x > xi)
                R++;
            else if (x < xi)
                L++;
            if (y > yi)
                U++;
            else if (y < yi)
                D++;

            xi = x;
            yi = y;
        }
        // cout << L << " " << R << " " << D << " " << U << " ";
        if (L == 0 || R == 0 || D == 0 || U == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}