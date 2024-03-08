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
        string s;
        cin >> s;
        if (n == 2 || n == 3)
        {
            cout << s << endl;
            continue;
        }
        int f = 0;
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 2] != 'a' && s[i + 2] != 'e')
                {
                    if (f == 0)
                    {
                        cout << s.substr(i - 1, 3);
                        f++;
                        cnt += 3;
                    }
                    else
                    {
                        cout << '.' << s.substr(i - 1, 3);
                        cnt += 3;
                    }
                }
                else
                {
                    if (f == 0)
                    {
                        cout << s.substr(i - 1, 2);
                        f++;
                        cnt += 2;
                    }
                    else
                    {
                        cout << '.' << s.substr(i - 1, 2);
                        cnt += 2;
                    }
                }
            }
        }
        if (n - cnt == 2)
            cout << '.' << s.substr(cnt, 2) << endl;
        else if (n - cnt == 3)
            cout << '.' << s.substr(cnt, 3) << endl;
    }
    return 0;
}