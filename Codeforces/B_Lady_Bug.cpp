// resolved 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string a, b; cin >> n >> a >> b;

    string ekta, arekta;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            ekta += a[i];
            arekta += b[i];
        }
        else 
        {
            ekta += b[i];
            arekta += a[i];
        }
    }
    
    // cout << ekta << " " << arekta << nl;

    int cnt1 = count(all(ekta), '0');
    int cnt2 = count(all(arekta), '0');

    // cout << cnt1 << " " << cnt2 << nl;

    if(cnt1*2 >= ekta.size() && cnt2 >= (arekta.size()/2)) cout << "YES" << nl;
    else cout << "NO" << nl;
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