// resolved from the TLE Eliminators + Editorial (the statement seems to be not clear)
#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int x, int y)
{
    cout << "? " << x << " " << y << nl;

    int jobab; cin >> jobab;

    return jobab;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st;
    for(auto e : a) st.insert(e);

    if(st.size() != n)
    {
        int From = -1, To = -1;
        for (int i = 1; i <= n; i++)
        {
            if(!st.count(i)) From = i;
            else To = i;
        }
        if(ask(From, To) == 0) cout << "! A" << nl;
        else cout << "! B" << nl;

        return;
    }
    
    int From, To;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 1) From = i;
        if(a[i] == n) To = i;
    }
    From++, To++;
    
    if(ask(From, To) >= n - 1 && ask(To, From) >= n - 1) cout << "! B" << nl;
    else cout << "! A" << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}