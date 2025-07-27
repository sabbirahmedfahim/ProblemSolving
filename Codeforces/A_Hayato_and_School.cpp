#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int odd = 0, even = 0;
    for(auto e : a)
    {
        if(e & 1) odd++;
        else even++;
    }

    if(even == n || (odd == 2 && even == 1 && n == 3))
    {
        cout << "NO" << nl; return;
    }

    if(odd >= 3)
    {
        int cnt = 0;
        cout << "YES" << nl;
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0) continue;
            cout << i + 1 << " ";
            cnt++;
            if(cnt == 3) 
            {
                cout << nl; return;
            }
        }
    }

    int cnt = 0;

    int e = 0, o = 0;
    cout << "YES" << nl;
    for (int i = 0; i < n; i++)
    {
        if((a[i] & 1) && o == 0) 
        {
            cout << i + 1 << " ";
            cnt++; o++;
            if(cnt == 3) 
            {
                cout << nl; return;
            }
        }
        if(a[i] % 2 == 0 && e < 2)
        {
            cout << i + 1 << " ";
            cnt++; e++;
            if(cnt == 3) 
            {
                cout << nl; return;
            }
        }
    }
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