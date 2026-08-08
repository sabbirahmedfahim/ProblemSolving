#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool ok(vector<int> a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if(a[i] == a[i + 1]) return true;
    }
    
    return false;
}
void solve()
{
    vector<int> a(3);
    for(auto &e : a) cin >> e;

    sort(all(a));

    int cnt = 0;
    while (!ok(a))
    {
        a[0]++; a[2]--;
        cnt++;

        sort(all(a));
    }
    
    cout << cnt << nl;
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