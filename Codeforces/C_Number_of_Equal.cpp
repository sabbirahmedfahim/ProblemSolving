#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    set<ll> sa, sb;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sa.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sb.insert(b[i]);
    }

    map<ll, ll> mpa, mpb;
    for(auto data : a) if(sa.count(data) && sb.count(data)) mpa[data]++;
    for(auto data : b) if(sa.count(data) && sb.count(data)) mpb[data]++;

    ll ans = 0;
    for(auto it1 = mpa.begin(), it2 = mpb.begin(); it1 != mpa.end(); it1++, it2++)
    {
        ans += it1->second * it2->second;
    }
    cout << ans << nl;

    return 0;
}