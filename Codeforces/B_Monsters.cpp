// took hints from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
i've to sort based on highest cur health, if healths are same, then sort on smaller idx
*/
bool cmp(pair<int, int> x, pair<int, int> y)
{
    if(x.first != y.first) return x.first > y.first;
    else return x.second < y.second;
}
void solve()
{
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n); 
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        a[i] = {data, i + 1};
    }

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        a[i].first %= k;
        if(a[i].first == 0) res.push_back(i + 1);  // 1-based

        // cout << a[i].first << " ";
    }

    // cout << "sz" << res.size() << " : "; 
    for(auto e : res) cout << e << " "; 

    sort(a.begin(), a.end(), cmp);
    for(auto [x, y] : a)
    {
        if(x == 0) continue;
        // cout << x << " " << y << nl;
        cout << y << " ";
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