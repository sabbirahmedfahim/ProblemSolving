#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int one = 0, tot = 0, cnt11 = 0, cnt00 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            tot++;

            if(a[i] == 1) one++;
        }
        if(a[i] == b[i] && a[i] == 1) cnt11++;
        if(a[i] == b[i] && a[i] == 0) cnt00++;
    }
    
    if(tot == 0)
    {
        cout << 0 << nl; return;
    }

    sort(all(b));
    if(one && b[0] != 1)
    {
        if(one % 2 == 0) cout << 2 << nl;
        else cout << 1 << nl;

        return;
    }
    else if(cnt00 && cnt11)
    {
        cout << 2 << nl; return;
    }

    cout << -1 << nl;
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
/*
1
3
1 0 0
1 1 0
*/