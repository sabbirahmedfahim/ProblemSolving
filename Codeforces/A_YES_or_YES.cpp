#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
        if (s == "YES")
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}