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

        if (s[0] == '0')
        {
            cout << -1 << endl;
            continue;
        }
        int j = -1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                j = i;
                break;
            }
        }
        // cout << j << " " << endl;
        if (j == -1)
            cout << -1 << endl;
        else
        {
            string a = s.substr(0, j);
            string b = s.substr(j, s.length() - j);
            // cout << a << " " << b << ": ";
            if (stoi(a) >= stoi(b))
                cout << -1 << endl;
            else
                cout << a << " " << b << endl;
        }
    }
    return 0;
}