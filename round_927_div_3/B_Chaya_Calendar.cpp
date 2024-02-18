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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            int j = 1;
            long long tmp = a[i];
            while (tmp <= res)
            {
                tmp = j * a[i];
                j++;
            }
            res = tmp;
        }
        cout << res << endl;
    }
    return 0;
}