#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') cnt++;
        else 
        {
            if(cnt) v.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt) v.push_back(cnt);

    sort(all(v)); reverse(all(v));

    if(count(all(s), '1') == 0)
    {
        cout << 0 << nl; return;
    }

    int ans = v.front();
    for (int i = 1; i < v.size() && (k>0); i++)
    {
        ans += v[i]; k--;
    }
    cout << ans << nl;
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