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
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
                pos++;
            else if (s[i] == '-')
                neg++;
        }
        cout << abs(pos - neg) << endl;
    }
    return 0;
}