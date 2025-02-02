#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int move, k; cin >> move >> k; string s; cin >> s;

    int cntS = count(all(s), 'S');
    // cout << cntS << nl;

    if(cntS >= k) cout << move << nl;
    else
    {
        cout << move + (k-cntS-1) << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}