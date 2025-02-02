// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; n--;
    vector<ll> v(n), ans; for(auto &c : v) cin >> c;
    ans.push_back(v[0]);
    for (int i = 0; i < n-1; i++)
    {
        ans.push_back((v[i]|v[i+1]));
    }
    ans.push_back(v.back());
    // print(ans);
    vector<ll> v2;
    for (int i = 0; i < ans.size()-1; i++)
    {
        v2.push_back((ans[i]&ans[i+1]));
    }

    if(v == v2) 
    {
        print(ans);
    }
    else cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "TEST CASE-" << i << nl;
        solve();
    }
    
    return 0;
}
