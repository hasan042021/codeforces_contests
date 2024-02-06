#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

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
        vector<int> mp(N, 'a');
        for (int i = 0; i < N; i++)
        {
            mp[i] = 'a';
        }
        string s = "";

        for (int i = 0; i < n; i++)
        {
            s += mp[a[i]];
            mp[a[i]]++;
        }
        cout << s << endl;
    }
    return 0;
}