#include <bits/stdc++.h>
using namespace std;
const int N = 1e9;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int a = N, b = N, cnt = 0;
        for (auto i : v)
        {
            if (a > b)
                swap(a, b);
            if (i <= a)
                a = i;
            else if (i <= b)
                b = i;
            else
            {
                a = i;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}