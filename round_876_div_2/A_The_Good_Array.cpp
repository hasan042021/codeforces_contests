#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k;
        cin >> n >> k;
        int res = 2;
        for (int i = 2; i < n; i++)
        {
            auto d = ceil(i / k);
            // cout << d << " ";
            if (d == res)
                res++;
        }
        cout << res << endl;
    }
    return 0;
}