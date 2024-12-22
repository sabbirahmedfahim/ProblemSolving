#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 2e3 + 5;
char mat[N][N];
int n, m;
bool is_valid_i(int i)
{
    return !(i > n || i <= 0);
}
bool is_valid_j(int j)
{
    return !(j > m || j <= 0);
}
void solve()
{
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j]; mat[i][j] == '+'? ans = 1 : ans;
        }
    }
    if(ans ==  0)
    {
        cout << 0 << nl; return;
    }

    // prefix sum?! 
    int mx_cnt = min(n,m) + min(n,m) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(mat[i][j] == '+')
            {
                int r = i+1, l = i-1, upor = j+1, nich = j-1;
                int cnt = 0;
                if(is_valid_i(l) && is_valid_i(r) && is_valid_j(upor) && is_valid_j(nich) &&
                mat[l][j] == '+' && mat[r][j] == '+' && mat[i][upor] == '+' && mat[i][nich] == '+' &&
                ((ans+1)/4 > n-i || (ans+1)/4 > m-j)) break;
                while (is_valid_i(l) && is_valid_i(r) && is_valid_j(upor) && is_valid_j(nich) &&
                mat[l][j] == '+' && mat[r][j] == '+' && mat[i][upor] == '+' && mat[i][nich] == '+')
                {
                    cnt += 4; r++, l--, upor++, nich--;
                }
                ans = max(ans, cnt + 1);
                if(ans == mx_cnt)
                {
                    cout << ans << nl; return;
                }
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}