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
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        vector<pair<int, int>> ski, movie, board;
        for (int i = 0; i < n; i++)
        {
            ski.push_back({a[i], i});
            movie.push_back({b[i], i});
            board.push_back({c[i], i});
        }

        sort(ski.rbegin(), ski.rend());
        sort(movie.rbegin(), movie.rend());
        sort(board.rbegin(), board.rend());

        int ans = 0;
        for (int i = 0; i < min(3, n); i++)
        {
            for (int j = 0; j < min(3, n); j++)
            {
                for (int k = 0; k < min(3, n); k++)
                {
                    if (ski[i].second != movie[j].second && ski[i].second != board[k].second && movie[j].second != board[k].second)
                    {
                        ans = max(ans, ski[i].first + movie[j].first + board[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}