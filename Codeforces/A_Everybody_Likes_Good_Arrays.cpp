#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
parity: 2 diye vag korle vag shes AKA remainder when divided by 2
*/
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    input(v);
    int cnt = 0;
    int op = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]%2 == v[i+1]%2) cnt++;
        else
        {
            op += cnt;
            cnt = 0;
        }
    }
    if(cnt != 0) op += cnt; // mr corner case
    cout << op << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}