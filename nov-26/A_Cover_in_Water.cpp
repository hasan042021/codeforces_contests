#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        int mx = 0;
        int tot_e = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                tot_e++;
                cnt++;
            }
            else if (s[i] == '#')
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        mx = max(mx, cnt);
        if (mx >= 3)
            cout << 2 << endl;
        else
            cout << tot_e << endl;
    }
    return 0;
}