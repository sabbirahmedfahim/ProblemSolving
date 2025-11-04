#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int mat[105][105];
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            mat[i][j] = s[j] - '0';
        }
    }

    auto getAns = [&](int x, int y) -> int
    {
        int data = 0;
        data += mat[x][y];
        data += mat[y][x];
        data += mat[n - x - 1][y];
        data += mat[x][n - y - 1];

        if(data == 0 || data == 4) return 0;
        if(data == 2) return 2;
        if(data == 3 || data == 1) return 1;
    };

    int res = 0;
    for (int i = 0; i < n/2 + (n & 1); i++)
    {
        for (int j = 0; j < n/2 + (n & 1); j++)
        {
            res += getAns(i, j);
            cout << getAns(i, j) << " : ";
        }
        cout << nl;
    }
    cout << res << nl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i][j];
    //     }
    //     cout << nl;
    // }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}