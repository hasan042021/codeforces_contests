#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        vector<int> v;
        int n;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if (a == 1)
                mx = max(mx, b);
            else if (a == 2)
                mn = min(mn, b);
            else
                v.push_back(b);
        }
        int cnt = mn - mx + 1;
        for (int i : v)
        {
            if (i <= mn && i >= mx)
                cnt--;
        }
        if (cnt < 0)
            cout << 0 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}
