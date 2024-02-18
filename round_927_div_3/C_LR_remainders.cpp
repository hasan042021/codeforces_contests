#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        int L = 0, R = n - 1;
        long long prod = 1;
        for (int i = 0; i < n; i++)
        {
            prod *= a[i];
        }
        cout << prod % m << " ";
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'L')
            {
                prod /= a[L];
                L++;
                cout << prod % m << " ";
            }
            else if (s[i] == 'R')
            {
                prod /= a[R];
                R--;
                cout << prod % m << " ";
            }
        }
        cout << endl;
    }
    return 0;
}