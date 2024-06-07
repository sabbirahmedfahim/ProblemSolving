#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        string s;
        cin >> s;
        int ascii_value;
        cin >> ascii_value;

        int revLen = s.size() - 1;
        int flag = 0;
        int count = 0;
        for (int i = 0; i < s.size() / 2; i++, revLen--)
        {
            if (s[i] != s[revLen])
            {
                int count = abs(s[revLen] - s[i]);
                ascii_value -= count;
                if (ascii_value < 0)
                    flag = 1;
            }
        }

        cout << ((flag > 0) ? "NO" : "YES") << endl;
    }

    return 0;
}