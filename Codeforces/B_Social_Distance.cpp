// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> v(n); for(auto &e : v) cin >> e;

    if(n > m) 
    {
        cout << "NO" << nl; return; // manushjn beshi chair theke
    }

    sort(all(v)); 
    v.push_back(v.front());

    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += max(v[i-1], v[i]);
    }

    cnt += n;
    
    if(cnt <= m) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}