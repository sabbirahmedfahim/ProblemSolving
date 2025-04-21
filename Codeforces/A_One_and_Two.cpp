#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int two = 0;
    for(auto e : a) 
    {
        if(e == 2) two++;
    }

    if(two & 1)
    {
        cout << -1 << nl; return;
    }
    if(two >= 2)
    {
        int ordhek = two/2, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 2) cnt++;
            if(cnt == ordhek)
            {
                cout << i + 1 << nl; return;
            }
        }
    }
    cout << 1 << nl; 
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