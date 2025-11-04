#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, infected; cin >> n >> infected;
    vector<int> a(infected);
    for(auto &e : a) cin >> e;

    if(n == infected)
    {
        cout << n << nl; return;
    }

    sort(all(a));
    vector<int> diff;
    for (int i = 0; i < infected - 1; i++)
    {
        diff.push_back(a[i + 1] - a[i] - 1);
    }

    int toTouchEnd = n - a.back(), toGetInitial = a[0];
    diff.push_back(toTouchEnd + toGetInitial - 1);

    if(diff.back() == 0) diff.pop_back();
    // print(diff);

    sort(all(diff));
    int cnt = 0, div = 0;
    while (!diff.empty())
    {
        int curr = diff.back();
        if(div != 0) curr /= div;
        if(div == 0) div += 2;
        
        if(curr == 0) 
        {
            break;
        }

        cnt += curr - 1;
        // cerr << cnt << nl;

        
        diff.pop_back();
        div += 2;
    }

    cout << n - cnt << nl;
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