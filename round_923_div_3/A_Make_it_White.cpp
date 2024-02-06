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
        string s;
        cin >> s;
        vector<int> idx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                idx.push_back(i);
        }

        cout << idx.back() - idx[0] + 1 << endl;
    }
    return 0;
}