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
        vector<pair<int, priority_queue<int>>> v(n);
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push(b);
        }
        for (auto i : v)
        {
            cout << i
        }
    }
    return 0;
}