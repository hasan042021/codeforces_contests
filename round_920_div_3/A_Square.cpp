#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x_min = INT_MAX, x_max = INT_MIN, y_min = INT_MAX, y_max = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            int a, b;
            cin >> a >> b;
            x_min = min(x_min, a);
            x_max = max(x_max, a);
            y_min = min(y_min, b);
            y_max = max(y_max, b);
        }
        // cout << x_max << " " << x_min << " " << y_max << " " << y_min << endl;
        cout << abs(x_max - x_min) * abs(y_max - y_min) << endl;
    }
    return 0;
}