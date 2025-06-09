#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    for(auto &e : a) cin >> e;

    int cnt = 1;
    set<int> prev, cur, next; // duplicate do not change the game
    prev.insert(a[0]);
    for (int i = 1; i < n; )
    {
        next.clear();
        cur.clear();
        while (i < n)
        {
            next.insert(a[i]);
            if(prev.count(a[i])) cur.insert(a[i]);

            if(prev == cur)
            {
                // print(cur);
                prev = next;
                i++;
                cnt++; break;
            }
            i++;
        }
        prev = next;
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