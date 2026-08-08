#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n,k; cin >> n >> k;
    string x, y; cin >> x >> y;

    map<char, int> mp;
    for(auto e : x) mp[e]++;

    if(x == y)
    {
        cout << "Yes" << nl; return;
    }

    int totZinX = count(all(x), 'z'), totZinY = count(all(y), 'z');
    if(totZinX > totZinY || k == n)
    {
        cout << "No" << nl; return;
    }

    cout << "Yes" << nl;
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