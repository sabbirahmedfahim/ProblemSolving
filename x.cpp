#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int dp[105][105];
int LCS(string &x, string &y, int n, int m)
{
    if(n == -1 || m == -1) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    if(x[n] == y[m])
    {
        return dp[n][m] = LCS(x, y, n - 1, m - 1) + 1;
    }
    else 
    {
        return dp[n][m] = max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
    }
}
void solve(int cs)
{
    cout << "Case " << cs << ": ";
    for (int i = 0; i < 105; i++)
    {
        for (int j = 0; j < 105; j++)
        {
            dp[i][j] = -1;
        }
    }

    string x, y; cin >> x >> y;

    cout << LCS(x, y, x.size(), y.size()) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(i + 1);
    }
    

    return 0;
}