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
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (sum % 3 == 1)
        {
            int tmp = sum;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                tmp -= a[i];
                if (tmp % 3 == 0)
                {
                    found = true;
                    break;
                }
                else
                    tmp += a[i];
            }
            if (found)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (sum % 3 == 2)
            cout << 1 << endl;
    }
    return 0;
}