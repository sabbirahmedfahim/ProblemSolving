#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a)); reverse(all(a));

    if(a[0] == a[1])
    {
        int ektuChootoValue = -1, idx = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] < a[0])
            {
                ektuChootoValue = a[i]; idx = i; break;
            }
        }
        if(ektuChootoValue == -1)
        {
            cout << "NO" << nl; return;
        }
        else 
        {
            swap(a[1], a[idx]);
        }
    }
    // print(a);

    ll sum = 0;
    for (int i = 1; i < a.size(); i++)
    {
        sum += a[i-1];
        // cout << sum << nl;
        if(sum == a[i])
        {
            cout << "NO" << nl; return;
        }
    }
    
    cout << "YES" << nl;
    print(a);
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