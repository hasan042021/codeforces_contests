#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        map<int, int> d, e;
        for (int i = 0; i < a; i++)
        {
            int el;
            cin >> el;
            d[el]++;
        }
        for (int i = 0; i < b; i++)
        {
            int el;
            cin >> el;
            e[el]++;
        }
        int cnt_a = 0, cnt_b = 0;
        bool ok = true;
        for (int i = 1; i <= k; i++)
        {
            if ((d[i] == 0) && (e[i] == 0))
            {
                ok = false;
                break;
            }
            if (d[i])
                cnt_a++;
            if (e[i])
                cnt_b++;
        }
        // cout << cnt_a << " " << cnt_b << " ";
        if (ok)
        {
            if ((cnt_a >= (k / 2)) && (cnt_b >= k / 2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}