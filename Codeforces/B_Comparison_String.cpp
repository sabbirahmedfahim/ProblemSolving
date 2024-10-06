#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; string s; cin >> n >> s;
        int mx = 0;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '<')
            {
                cnt1++;
                mx = max(mx, cnt1);
                cnt2 = 0;
            }
            else
            {
                cnt2++;
                mx = max(mx, cnt2);
                cnt1 = 0;
            }
        }
        cout << mx + 1 << nl;
    }

    return 0;
}