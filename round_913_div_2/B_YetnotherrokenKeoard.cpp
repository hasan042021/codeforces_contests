#include <bits/stdc++.h>
using namespace std;
// #define pci pair<char, int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ns = "";
        stack<int> stl;
        stack<int> stu;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (stl.empty())
                    continue;
                int last = stl.top();
                ns[last] = ' ';
                stl.pop();
            }
            else if (s[i] == 'B')
            {
                if (stu.empty())
                    continue;
                int last = stu.top();
                stu.pop();
                ns[last] = ' ';
            }
            else
            {
                ns += s[i];
                if (s[i] >= 'a' && s[i] <= 'z')
                    stl.push(ns.length() - 1);
                else if (s[i] >= 'A' && s[i] <= 'Z')
                    stu.push(ns.length() - 1);
            }
        }
        for (char c : ns)
        {
            if (c == ' ')
                continue;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}