#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll getAns(vector<ll> &a)
{
    ll sum = 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
    }
    return sum;
}
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    ll mx = 0;
    int idx = -1;
    for (int i = 0; i < n - 2; i++)
    {
        ll data = abs(a[i] - a[i + 1]) + abs(a[i + 1] - a[i + 2]);
        ll curr = abs(a[i] - a[i + 2]);
        ll save = data - curr;

        if(save > mx)
        {
            idx = i + 1;
            mx = save;
        }

        // if(save > mx && ((a[i] < a[i + 1] && a[i + 1] > a[i + 2])))
        // {
        //     idx = i + 1;
        //     mx = data;
        // }
        // if(save > mx && ((a[i] > a[i + 1] && a[i + 1] < a[i + 2])))
        // {
        //     idx = i + 1;
        //     mx = data;
        // }
    }
    // cout << idx << nl;

    vector<ll> x, y, z;
    for (int i = 0; i < n; i++)
    {
        if(i == idx) continue;
        x.push_back(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i == 0) y.push_back(a[i]);
        else if(i == n - 1) z.push_back(a[i]);
        else 
        {
            y.push_back(a[i]);
            z.push_back(a[i]);
        }
    }
    
    vector<ll> sums;
    sums.push_back(getAns(x));
    sums.push_back(getAns(y));
    sums.push_back(getAns(z));

    sort(all(sums));
    cout << sums.front() << nl;
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