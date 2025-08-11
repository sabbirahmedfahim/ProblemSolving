#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin>>e;
    for(auto &e : b) cin>>e;

    int cnt = 0;
    for (int k = 0; k < 1000000; k++)
    {
        bool step1 = false, step2 = false;
        for (int i = 0; i < n && !step1; i++)
        {
            if(a[i] > b[i]) a[i]--, step1 = true;
        }
        for (int i = 0; i < n && !step2; i++)
        {
            if(b[i] > a[i]) b[i]--, step2 = true;
        }

        cnt++;
        if(!step1) break;
    }

    cout << cnt << nl;
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