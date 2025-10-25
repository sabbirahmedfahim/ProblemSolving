// resolved from the TLE Eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int n = s.size();

    int mxCnt = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        while (i < n && s[i] == '1')
        {
            curr++;
            i++;
        }
        mxCnt = max(mxCnt, curr);
        curr = 0;
    }
    
    if(mxCnt == 0)
    {
        cout << 0 << nl; return;
    }
    if(mxCnt == n)
    {
        cout << 1ll * n * n << nl; return;
    }

    if(s[0] == '1' && s.back() == '1' && mxCnt < n)
    {
        for (int i = 0; ; )
        {
            while (i < n && s[i] == '1')
            {
                curr++; i++;
            }
            break;
        }
        for (int i = n - 1; ; )
        {
            while (i >= 0 && s[i] == '1')
            {
                curr++; i--;
            }
            break;
        }
        mxCnt = max(mxCnt, curr);
    }

    // cerr << mxCnt << nl;

    mxCnt++; // d o  n o t  u n d e r s t a n d

    ll tot_cnt =  1ll * ((mxCnt + 1) / 2) * (mxCnt / 2); // d o  n o t  u n d e r s t a n d
    cout << tot_cnt << nl;
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