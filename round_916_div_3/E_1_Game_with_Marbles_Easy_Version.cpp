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
        vector<int> arrayA(n);
        vector<int> arrayB(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arrayA[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arrayB[i];
        }

        vector<pair<int, int>> cmb(n);

        for (int i = 0; i < n; i++)
        {
            cmb[i] = {arrayA[i] + arrayB[i], i};
        }

        sort(cmb.begin(), cmb.end());

        long long r = 0;
        long long op = 0;

        set<int> usedIndices;

        for (int i = n - 1; i >= 0; i--)
        {
            if (op % 2 == 0)
            {
                r += arrayA[cmb[i].second] - 1;
                usedIndices.insert(cmb[i].second);
            }
            else
            {
                if (usedIndices.find(cmb[i].second) == usedIndices.end())
                {
                    r -= arrayB[cmb[i].second] - 1;
                }
            }
            op++;
        }

        cout << r << endl;
    }
    return 0;
}