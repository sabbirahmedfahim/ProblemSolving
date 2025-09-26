#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    n = s.size();

    // int aAche = count(all(s), 'a'), bAche = count(all(s), 'b');
    // if(aAche == 0 || bAche == 0 || (aAche == 1 && bAche == 1))
    // {
    //     cout << 0 << nl; return;
    // }

    // cout << "have answer" << nl;

    // for a
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'a')
        {
            if(l == -1)
            {
                l = i, r = i;
            }
            else r = i;
        }
    }
    
    ll res1 = 0;
    int goodL = 0, goodR = 0;
    for (int i = l; i <= r && l != -1; i++)
    {
        if(s[i] == 'b')
        {
            ll data = min(i - l - goodL, r - i - goodR);
            if(data <= 0) res1 += 0;
            else res1 += data;

            if(i - l < r - i) goodL++;
            else if(i - l > r - i) goodR++;
            else goodL++, goodR++;
        }
    }
    // cerr << l << " : " << r << nl;
    
    // for b
    l = -1, r = -1;
    goodL = 0, goodR = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'b')
        {
            if(l == -1)
            {
                l = i, r = i;
            }
            else r = i;
        }
    }
    ll res2 = 0;
    for (int i = l; i <= r && l != -1; i++)
    {
        if(s[i] == 'a')
        {
            ll data = min(i - l - goodL, r - i - goodR);
            if(data <= 0) res2 += 0;
            else res2 += data;

            if(i - l < r - i) goodL++;
            else if(i - l > r - i) goodR++;
            else goodL++, goodR++;
            // if(i > (r - i)) cerr << r << " - " << i << " : res2 = " << res2 << nl;
            // else cerr << i << " : res2 == " << res2 << nl;
        }
    }

    cout << min(res1, res2) << nl;
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