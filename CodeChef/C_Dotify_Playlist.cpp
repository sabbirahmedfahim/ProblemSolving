#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k, l; cin >> n >> k >> l;
    vector<int> v;
    while (n--)
    {
        int m, lang; cin >> m >> lang;
        if(lang == l) v.push_back(m);
    }
    sort(v.rbegin(), v.rend());
    // print(v);
    ll sum = 0;
    if(!v.empty())
    {
        for (int i = 0; i < k; i++)
        {
            sum += v[i];
        }
    }
    if(v.empty() || v.size() < k) cout << -1 << nl; // added condition [v.size() < k]
    else cout << sum << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}