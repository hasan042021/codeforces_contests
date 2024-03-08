#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 10;
char grid[MAX_N][MAX_N];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < MAX_N; i++)
        {
            for (int j = 0; j < MAX_N; j++)
            {
                grid[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char a;
                cin >> a;
                grid[i][j] = a;
            }
        }
        int prev = 0;
        bool isSquare = false;
        for (int i = 0; i < n; ++i)
        {
            int cnt = 0;
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                    cnt++;
            }
            if (prev > 1 && cnt == prev)
            {
                cout << "SQUARE" << endl;
                isSquare = true;
                break;
                ;
            }
            if (cnt > 1 && prev == 0)
                prev = cnt;
        }
        if (!isSquare)
            cout << "TRIANGLE" << endl;
    }

    return 0;
}