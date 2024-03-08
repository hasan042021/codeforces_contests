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
        int mid = n / 2;

        vector<int> b, c;

        for (int i = 1; i <= n; i++)
        {
            if (i <= mid)
                b.push_back(i);
            else
                c.push_back(i);
        }

        sort(c.begin(), c.end(), greater<int>());
        int j = 0, k = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                cout << c[j] << " ";
                j++;
            }
            else
            {
                cout << b[k] << " ";
                k++;
            }
        }
        cout << endl;
    }

    return 0;
}