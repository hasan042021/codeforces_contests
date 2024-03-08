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
        char c = s[0];
        int d = s[1] - '0';
        for (int i = 1; i <= 8; i++)
        {
            if (d == i)
                continue;
            cout << c;
            char ca = i + '0';
            cout << ca << endl;
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (c == i)
                continue;
            cout << i;
            cout << s[1] << endl;
        }
    }
    return 0;
}