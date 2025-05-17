#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll cnt(vector<int> &a, int k)
{
    int moves = 0;
    vector<ll> sum;
    for (int i = 0; i < a.size(); )
    {
        ll cur_sum = 0, moves = 0;
        while (moves < k && i < a.size())
        {
            cur_sum += a[i];
            moves++, i++;
        }
        sum.push_back(cur_sum);
    }
    sort(all(sum));
    
    return sum.back() - sum.front();
}
void solve()
{
    int n; cin>>n; vector<int> a(n); for(auto &e : a) cin>>e;
    // sort(all(a)); // do not sort ***

    vector<int> target;
    for (int i = 1; i*2 <= n; i++)
    {
        if(n%i == 0)
        {
            target.push_back(i);
            // target.push_back(n/i);
        }
    }

    // print(target);

    ll mx = 0, cur;
    for (int i = 0; i < target.size(); i++)
    {
        cur = cnt(a, target[i]);
        mx = max(mx, cur);
    }

    cout << mx << nl;
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