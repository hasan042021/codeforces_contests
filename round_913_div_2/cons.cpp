#include <bits/stdc++.h>
using namespace std;

void countConsecutive(string str)
{
    vector<int> sameCount, diffCount;
    char prev = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == prev)
        {
            count++;
        }
        else
        {
            sameCount.push_back(count);
            count = 1;
            prev = str[i];
        }
    }

    sameCount.push_back(count);
    prev = str[0];
    count = 0;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != prev)
        {
            count++;
        }
        else
        {
            diffCount.push_back(count);
            count = 0;
            prev = str[i];
        }
    }

    diffCount.push_back(count);

    cout << "Same Count: ";
    for (int i = 0; i < sameCount.size(); i++)
    {
        cout << sameCount[i] << " ";
    }

    cout << "\nDiff Count: ";
    for (int i = 0; i < diffCount.size(); i++)
    {
        cout << diffCount[i] << " ";
    }

    cout << endl;
}

int main()
{
    string str = "bbbaccdef";
    countConsecutive(str);

    return 0;
}