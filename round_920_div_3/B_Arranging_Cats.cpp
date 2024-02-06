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
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        int cnt_a = 0, cnt_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                cnt_a++;
            if (b[i] == '1')
                cnt_b++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1' && a[i] == '0')
                cnt++;
        }
        if (cnt_a > cnt_b)
        {
            cnt += cnt_a - cnt_b;
        }
        cout << cnt << endl;
    }
    return 0;
}