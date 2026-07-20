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

    vector<int> diff;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
        for (int j = 0; j < n; j++)
        {
            diff.push_back(a[i] - a[j]);
        }
    }
    
    int cnt = 0;
    for (int i = 0; i < diff.size(); i++)
    {
        for (int j = 0; j < diff.size(); j++)
        {
            if(st.count(diff[i] - diff[j]) || st.count(diff[j] - diff[i]))
            {
                cnt++;
            }
        }
    }
    // cout << cnt << nl;

    if(cnt < n) cout << "NO" << nl;
    else cout << "YES" << nl;
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