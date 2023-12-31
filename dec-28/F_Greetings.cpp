#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        vector<int> p(2 * n);
        for (int i = 0; i < n; i++)
        {
            p[i] = a[i];
            p[i + n] = b[i];
        }
        sort(p.begin(), p.end());
        long long ans = 0;
        int cnt = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i < 2 * n - 1 && p[i] == p[i + 1])
            {
                cnt++;
            }
            else
            {
                ans += 1LL * cnt * (cnt + 1) / 2;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
