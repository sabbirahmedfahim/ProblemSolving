#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--)
    {
        int n; string s; cin >> n >> s;
        int cnt = 0;
        int mx = 0;
        int total_empty = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.')
            {
                cnt++;
                total_empty++;
                mx = max(mx, cnt);
            }
            else cnt = 0;
        }
        if(mx > 2) cout << 2 << nl;
        else cout << total_empty << nl;
    }

    return 0;
}