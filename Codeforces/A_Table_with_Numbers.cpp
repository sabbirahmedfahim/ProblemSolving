#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int h, l; cin >> h >> l;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if(h > l)
    {
        int rowBeshi = 0, haveCol = 0;
        for (int i = 1; i <= n; i++)
        {
            if(a[i] > l && a[i] <= h) rowBeshi++;

            if(a[i] <= l) haveCol++;
        }

        int res = min(rowBeshi, haveCol);
        haveCol -= res;
        res += haveCol / 2;
        cout << res << nl;
    }
    else if(h < l)
    {
        int colBeshi = 0, haveRow = 0;
        for (int i = 1; i <= n; i++)
        {
            if(a[i] > h && a[i] <= l) colBeshi++;

            if(a[i] <= h) haveRow++;
        }

        int res = min(colBeshi, haveRow);
        haveRow -= res;
        res += haveRow / 2;


        cout << res << nl;
    }
    else 
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if(a[i] <= l) cnt++;
        }
        cout << cnt / 2 << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}