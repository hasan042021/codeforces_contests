#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int qi = 0, qj = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '?')
                {
                    qi = i;
                    qj = j;
                }
            }
        }
        int A = 0, B = 0, C = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[qi][j] == 'A')
                A = 1;
            else if (a[qi][j] == 'B')
                B = 1;
            else if (a[qi][j] == 'C')
                C = 1;
        }
        if (A == 0)
            cout << 'A' << endl;
        else if (B == 0)
            cout << 'B' << endl;
        else if (C == 0)
            cout << 'C' << endl;
    }
    return 0;
}