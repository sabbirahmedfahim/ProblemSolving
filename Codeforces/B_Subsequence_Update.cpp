#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, l, r; cin >> n >> l >> r; l--, r--;
    vector<ll> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i];

    set<vector<ll>> s;
    int q = n, idx = 0;
    while (q--)
    {
        vector<ll> tmp = v;
        reverse(tmp.begin()+idx, tmp.end()); // complexity ache :()

        s.insert(tmp);
        idx++;
    }

    q = n, idx = n-1;
    while (q--)
    {
        vector<ll> tmp = v;
        reverse(tmp.begin(), tmp.end()-idx); // complexity ache :()

        s.insert(tmp);
        idx--;
    }
    
    ll candidateAns = 0;
    for(int i = l; i <= r; i++) candidateAns += v[i];
    for(auto e : s)
    {
        // print(e);

        ll data = 0;
        for(int i = l; i <= r; i++)
        {
            data += e[i];
        }

        candidateAns = min(candidateAns, data);
    }

    cout << candidateAns << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}