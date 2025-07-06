#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll getAns(vector<ll> arr)
{
    ll mn = arr[0], res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        mn = min(mn, arr[i]);
        res += mn;
    }
    
    return res;
}
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    if(n >= 3)
    {
        vector<ll> b = a, c = a;
        b[0] += b[1];
        b[1] = 0;

        c[1] += c[0];
        c[2] = 0;

        vector<ll> ansList;
        ansList.push_back(getAns(a));
        ansList.push_back(getAns(b));
        ansList.push_back(getAns(c));
        sort(all(ansList));
        cout << ansList[0] << nl;

        return;
    }

    if(n == 1) cout << a[0] << nl;
    else 
    {
        vector<ll> ansList;
        ansList.push_back(a[0] + a[0]);
        ansList.push_back(a[0] + a[1]);
        sort(all(ansList));

        cout << ansList[0] << nl;
    }
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