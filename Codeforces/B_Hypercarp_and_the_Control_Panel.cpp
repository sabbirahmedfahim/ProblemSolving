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

    set<int> dontTouch;
    for (int i = 0; i < n - 4; i++)
    {
        if(a[i] == a[i + 1] && a[i + 3] == a[i + 4] && a[i] == a[i + 4] && a[i + 2] != a[i])
        {
            dontTouch.insert(i + 2);
        }
    }
    // print(dontTouch);
    
    bool touch = false;
    for (int i = 0; i < n - 3 && touch == false; i++)
    {
        if(a[i] == a[i + 1] && a[i + 2] == a[i + 3] && a[i] != a[i + 2])
        {
            swap(a[i + 1], a[i + 2]);
            touch = true;
        }
    }

    if(n >= 3 && touch == false)
    {
        if(a[1] == a[2] && a[0] != a[1]) 
        {
            swap(a[0], a[1]); touch = true;
        }
    }
    if(n >= 3 && touch == false)
    {
        if(a[n - 3] == a[n - 2] && a[n - 1] != a[n - 2]) 
        {
            swap(a[n - 1], a[n - 2]); touch = true;
        }
    }

    for (int i = 0; i < n - 2 && touch == false; i++)
    {
        if(a[i] == a[i + 1] && a[i + 1] != a[i + 2])
        {
            if(dontTouch.count(i + 2)) continue;
            if(i + 3 < n && a[i + 3] == a[i + 1]) continue;

            swap(a[i + 1], a[i + 2]);
            touch = true;
        }
    }
    for (int i = 0; i < n - 2 && touch == false; i++)
    {
        if(a[i + 1] == a[i + 2] && a[i] != a[i + 1])
        {
            if(dontTouch.count(i)) continue;
            if(i - 1 >= 0 && a[i - 1] == a[i + 1]) continue;

            swap(a[i], a[i + 1]);
            touch = true;
        }
    }

    int cnt = 0;
    // print(a);
    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i - 1]) cnt++;
    }
    
    cout << n - cnt << nl;
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