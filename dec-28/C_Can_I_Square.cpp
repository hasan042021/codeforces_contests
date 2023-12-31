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
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        ll root = long(sqrt(sum));
        double r = root * root;

        if (abs(r - sum * 1.0) < 0.00001)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}