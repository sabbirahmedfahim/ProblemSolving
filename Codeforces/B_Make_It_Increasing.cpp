#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    int x = 1E3;
    int cnt = 0;
    while (x--)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(v[i] >= v[i+1]) 
            {
                v[i] /= 2; cnt++;
            }
        }
    }
    ll mx = 0; bool is_duplicate = false;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] == v[i+1]) 
        {
            is_duplicate = true; break;
        }
    }
    // print(v);
    cout << ((is_duplicate)? -1 : cnt ) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}