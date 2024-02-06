#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, greater<int>());

        ll tot = 0;
        for (int i = 0; i < b; i++)
            tot += arr[i];
        ll s = 0, res = 0, j = 0, cnt = 0;
        s = accumulate(arr, arr + n, s) - tot;
        res = s - tot;
        for (int i = b; i < n; i++)
        {
            s -= arr[i];
            tot += arr[i];
            tot -= arr[j++];
            cnt++;
            res = max(res, s - tot);
            if (cnt == a)
                break;
        }
        ll index = cnt;
        if (cnt < a)
        {
            for (int i = index; i < n; i++)
            {
                tot -= arr[i];
                res = max(res, -tot);
                cnt++;
                if (cnt == a)
                    break;
            }
        }
        ll zero = (long long int)0;
        if (a == n)
            res = max(res, zero);
        cout << res << endl;
    }
    return 0;
}