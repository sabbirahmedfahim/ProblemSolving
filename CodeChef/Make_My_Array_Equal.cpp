#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> v(n);
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > 0 && !s.count(v[i])) s.insert(v[i]); 
    }
    
    cout << ((s.size() <= 1)? "YES" : "NO") << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}