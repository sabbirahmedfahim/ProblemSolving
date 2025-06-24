// took hints (just hint 1 from the editorial)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void findXor(vector<int> a)
{
    int mx = 0;
    for (int i = 0; i < a.size()-1; i++)
    {
        mx = max(mx, (a[i] ^ a[i + 1]));
        // cout << a[i] << " " << a[i + 1] << " : " << (a[i] ^ a[i + 1]) << nl;
    }
    cout << mx << nl;
}
void solve()
{
    int n; cin >> n;

    n--;
    vector<int> res;
    int mxPow = 0;
    for (int bit = 0; bit < (1<<30); bit++)
    {
        if((1<<bit) <= n)
        {
            mxPow = (1<<bit);
        }
        else break;
    }
    
    for (int i = 1; i < mxPow; i++)
    {
        res.push_back(i);
    }
    res.push_back(0);
    res.push_back(mxPow);
    for (int i = mxPow + 1; i <= n; i++)
    {
        res.push_back(i);
    }
    
    // findXor(res);
    print(res);
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

