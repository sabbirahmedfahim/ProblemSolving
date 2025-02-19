#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;

    int cnt = 0;
    for (int i = 0, j = 0; i < n && j < m; )
    {
        while (j < m && a[i] != b[j])
        {
            j++; if(j == m) break;
        }
        if(a[i] == b[j]) 
        {
            cnt++, i++, j++;
        }
    }

    cout << cnt << nl;
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