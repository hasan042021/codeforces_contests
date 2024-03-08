#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        int x = 0, y = 0;
        int ini_a = a, ini_b = b;
        while (a <= l)
        {
            if (l % a == 0)
                x++;
            else
                break;
            a = ini_a * a;
        }
        while (b <= l)
        {
            if (l % b == 0)
                y++;
            else
                break;
            b = ini_b * b;
        }
        set<int> s;
        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                long long tmp = 1;

                for (int k = 0; k < i; k++)
                {
                    tmp *= ini_a;
                }

                for (int k = 0; k < j; k++)
                {
                    tmp *= ini_b;
                }

                if ((tmp <= l) && (l % tmp == 0))
                {
                    s.insert(l / tmp);
                }
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}