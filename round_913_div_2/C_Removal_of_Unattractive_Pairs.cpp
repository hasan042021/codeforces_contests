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
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            if (s[0] == s[1])
                cout << 0 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}