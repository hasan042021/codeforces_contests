#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int d = n / m;
        if (n % m != 0)
            d++;
        if (k >= n - d)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}