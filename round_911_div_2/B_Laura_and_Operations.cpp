#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
        {
            cout << "1 1 1" << endl;
        }
        else
        {
            if (a > b && a > c)
            {
                if ((((b & 1) == 0) && ((c & 1) == 0)) || (((b & 1) == 1) && ((c & 1) == 1)))
                {
                    cout << "1 0 0" << endl;
                }
                else
                {
                    if (b > c)
                        cout << "1 1 0";
                    else
                        cout << "1 0 1" << endl;
                }
            }
            else if (b > a && b > c)
            {
                if ((((a & 1) == 0) && ((c & 1) == 0)) || (((a & 1) == 1) && ((c & 1) == 1)))
                {
                    cout << "0 1 0" << endl;
                }
                else
                {
                    if (a > c)
                        cout << "1 1 0" << endl;
                    else
                        cout << "0 1 1" << endl;
                }
            }
            else
            {
                if ((((b & 1) == 0) && ((a & 1) == 0)) || (((b & 1) == 1) && ((a & 1) == 1)))
                {

                    cout << "0 0 1" << endl;
                }
                else
                {
                    if (b > a)
                        cout << "0 1 1" << endl;
                    else
                        cout << "1 0 1" << endl;
                }
            }
        }
    }
    return 0;
}