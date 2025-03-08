#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, l; cin >> a >> b >> l;
    
    set<int> s;
    // find the number of distinct possible values of k
    for (int i = 0; i < 31; i++) // O(31 * 31) -> O(961)
    {
        for (int j = 0; j < 31; j++)
        {
            ll data = (pow(a, i) * pow(b, j));
            // cout << i << " - " << j  << " -> " << data << nl;
            if(l%data == 0 && l >= data) s.insert(l/data);
        }
    }
    
    cout << s.size() << nl;
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