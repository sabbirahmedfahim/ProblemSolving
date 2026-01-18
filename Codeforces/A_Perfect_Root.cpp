#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
vector<int> perfectRoots;
void preClac()
{
    for (int i = 1; i <= 10000; i++)
    {
        int x = sqrt(i);
        if((x * x) == i) perfectRoots.push_back(i);

        if(perfectRoots.size() > 23) break;
    }
}
void solve()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << perfectRoots[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preClac();
    // cout << perfectRoots.size() << nl;

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}