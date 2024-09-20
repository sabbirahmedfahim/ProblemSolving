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
        int n;
        cin >> n;
        vector<int> v;
        while (n--)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '#')
                    v.push_back(i + 1);
            }
        }
        reverse(v.begin(), v.end());
        for (int data : v)
        {
            cout << data << " ";
        }

        cout << nl;
    }

    return 0;
}