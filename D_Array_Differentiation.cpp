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

    if(n == 1)
    {
        if(a[0] == 0) cout << "YES" << nl;
        else cout << "NO" << nl;

        return;
    }

    // sort(all(a));
    vector<int> take;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(a[j] <= a[i]) continue;
            take.push_back(a[j] - a[i]);
            st.insert(a[j] - a[i]);
        }
    }

    // if(st.size() == take.size()) cout << "distinct" << nl << nl;

    // sort(all(take));
    // print(take);

    vector<int> chk;
    for (int i = 0; i < take.size(); i++)
    {
        for (int j = 0; j < take.size(); j++)
        {
            if(i == j) continue;
            // if(take[j] <= take[i]) continue;

            chk.push_back(take[j] - take[i]);
        }
    }
    sort(all(chk));
    // print(chk);

    st.clear();
    for(auto e : chk) st.insert(e);

    if(chk.size() == st.size()) cout << "NO" << nl;
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