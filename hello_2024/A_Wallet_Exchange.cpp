#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long s = a + b;
        if (s % 2 == 0)
            cout << "Bob" << endl;
        else if (s % 2 == 1)
            cout << "Alice" << endl;
    }
    return 0;
}