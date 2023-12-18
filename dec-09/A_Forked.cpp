#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        map<pii, int> mp;
        mp[{xk - a, yk - b}]++;
        mp[{xk - a, yk + a}]++;
        mp[{xk - b, yk + a}]++;
        mp[{xk - b, yk - a}]++;
        int cnt = 0;
        if (mp.find({xq - a, yq - b}) != mp.end())
            cnt++;
        if (mp.find({xq - b, yq - a}) != mp.end())
            cnt++;
        if (mp.find({xq + a, yq + b}) != mp.end())
            cnt++;
        if (mp.find({xq + b, yq + a}) != mp.end())
            cnt++;
        for (auto e : mp)
        {
            cout << e.first.first << " " << e.first.second << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}