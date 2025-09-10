#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> a(n + 1);
    int curr = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '0') a[i + 1] = curr--;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '1') a[i + 1] = curr--;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cerr << a[i] << " ";
    // }
    // cerr << nl;

    set<int> curr_window;
    for (int l = 1, r = 1; r <= n; r++)
    {
        curr_window.insert(a[r]);
        int window_mx = *--curr_window.end();

        if(r - l + 1 == k)
        {
            if(s[r - 1] == '1')
            {
                if(window_mx == a[r])
                {
                    cout << "NO" << nl; return;
                }
            }

            curr_window.erase(a[l]);
            l++;
        }
    }

    cout << "YES" << nl;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
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