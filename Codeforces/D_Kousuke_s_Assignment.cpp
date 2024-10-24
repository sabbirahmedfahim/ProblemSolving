#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    input(v);
    vector<int> pref(n);
    pref[0] = v[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i-1] + v[i];
        if(v[i-1] > 0 && v[i] < 0 && pref[i] == 0) cnt++;
        else pref[i-1] = 0;
    }
    cout << cnt << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}