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
        int f_a = -1, l_b = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && f_a == -1)
                f_a = i;
            if (s[i] == 'B')
                l_b = i;
        }
        if (f_a != -1 && l_b != -1 && f_a < l_b)
            cout << l_b - f_a << endl;
        else
            cout << 0 << endl;

        
    }
    return 0;
}