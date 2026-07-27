#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    // print(a);

    string ans = "";
    multiset<int> ml;
    int idxOfLastOk = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= q)
        {
            ans.push_back('1');
            ml.insert(a[i]);

            idxOfLastOk = i;
        }
        else ans.push_back('0');
    }
    
    int tmp = q, shobarBoro = -1;
    if(idxOfLastOk != -1) shobarBoro = *prev(ml.end());
    for (int i = idxOfLastOk; i >= 0 && idxOfLastOk != -1; i--)
    {
        if(a[i] <= tmp) 
        {
            auto it = ml.erase(ml.find(a[i]));
        }
        else
        {
            if(ml.empty()) 
            {
                if(q > shobarBoro)
                {
                    // cerr << q << ' ' << shobarBoro << nl;
                    ans[i] = '1'; q--; 
                }
            }
            else
            {
                auto it = prev(ml.end());
                // cerr << q << ' ' << *it << nl;

                if(q > *it)
                {
                    ans[i] = '1'; q--;
                }
            }
        }
    }

    q = tmp;
    for (int i = n - 1; i >= 0 && q; i--)
    {
        if(a[i] > q) 
        {
            ans[i] = '1'; q--;
        }
        else break;
    }
    
    cout << ans << nl;
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