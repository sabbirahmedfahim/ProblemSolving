#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> thikKina(n + 1);
    for (int i = 3, j = 2; i <= n; i++, j++)
    {
        thikKina[i] = j;
    }
    
    thikKina[1] = n;
    thikKina[2] = 1;

    // print(thikKina);
    for (int i = 2; i <= n; i++)
    {
        int mx = max(thikKina[i], thikKina[i-1]);
        if(mx%i != (i-1))
        {
            cout << -1 << nl; return;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << thikKina[i] << ' ';
    }
    cout << nl;
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