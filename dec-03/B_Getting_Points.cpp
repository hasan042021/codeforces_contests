#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p, l, ts;
        cin >> n >> p >> l >> ts;
        ll pr = n / 7;
        if (n % 7 != 0)
            pr++;
        ll cnt = 0;
        ll pts = 0;

        while (pts < p)
        {
            if (pr == 1)
            {
                pts += (l + ts);
                pr--;
                cnt++;
            }
            else if (pr > 0)
            {
                pts += (l + 2 * ts);
                pr -= 2;

                cnt++;
            }
            else
            {
                pts += l;

                cnt++;
            }
        }

        cout << n - cnt << endl;
    }
    return 0;
}