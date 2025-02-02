// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));

    int idx = -1; 
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] == v[i+1]) idx = i+1;
    }

    if(idx == -1) 
    {
        cout << -1 << nl; return;
    }
    
    int legs = v[idx];
    v.erase(v.begin()+idx);
    v.erase(v.begin()+idx-1);

    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i+1] < v[i] + 2 * legs)
        {
            cout << legs << " " << legs << " " << v[i] << " " << v[i+1] << nl; return;
        }
    }

    cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}