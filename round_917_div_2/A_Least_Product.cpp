#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll pos = 0, neg = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                z++;
            else if (a[i] > 0)
                pos++;
            else
                neg++;
        }
        if (z != 0)
            cout << 0 << endl;
        else if (neg % 2 != 0)
            cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
    return 0;
}