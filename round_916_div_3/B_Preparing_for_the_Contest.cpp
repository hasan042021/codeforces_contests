#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
        else if (k == n - 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            int r = n - k;
            for (int i = r; i <= n; i++)
                cout << i << " ";
            for (int i = r - 1; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}