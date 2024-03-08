#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<int> z, o;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                z.push_back(i);
            else
                o.push_back(i);
        }
        if (z.size() == o.size())
            cout << 0 << endl;
        else
        {
            string t = s;
            int n = min(z.size(), o.size());

            int i = 0;
            while (i < n)
            {
                int a = z[i], b = o[i];
                swap(t[a], t[b]);
                i++;
            }
            // cout << s << " " << t << "--- ";

            int cnt = 0;
            int si = 0, ti = 0;
            int l = t.length();
            while (si < l && ti < l)
            {
                if (s[si] == t[ti])
                {
                    cnt++;
                    ti++;
                }
                else
                {
                    si++, ti++;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}