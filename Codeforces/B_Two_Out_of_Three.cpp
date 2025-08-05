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
    vector<int> freq(105);
    set<int> st;
    for(auto &e : a) cin >> e;
    for(auto e : a) 
    {
        st.insert(e);
        freq[e]++;
    }
    int two_or_more = 0, x = -1, y = -1;
    for(auto e : st)
    {
        if(freq[e] > 1) 
        {
            two_or_more++;
            if(x == -1) x = e;
            else y = e;
        }
    }

    if(two_or_more <= 1)
    {
        cout << -1 << nl; return;
    }

    bool x_first = true, y_first = true;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            if(x_first) 
            {
                cout << 1 << " "; x_first = false;
            }
            else cout << 2 << " ";
        }
        else if(a[i] == y)
        {
            if(y_first) 
            {
                cout << 2 << " "; y_first = false;
            }
            else cout << 3 << " ";
        }
        else cout << 1 << " ";
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