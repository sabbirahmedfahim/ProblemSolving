#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<int> r(n, 0), c(m, 0);

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            r[i] ^= a[i][j];
            c[j] ^= a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        ans += r[i];

    for (int j = 0; j < m; j++)
        ans += c[j];

    ll res = ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int addKorbo = r[i] ^ c[j], badDibo = r[i] + c[j];
            ll curr = ans - badDibo + addKorbo;
            res = min(res, curr);
        }
    }

    cout << res << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}