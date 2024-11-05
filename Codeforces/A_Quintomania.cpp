#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    bool isPossible = true;
    for (int i = 0; i < n-1; i++)
    {
        if(abs(v[i] - v[i+1]) != 5 && abs(v[i] - v[i+1]) != 7) 
        {
            isPossible = false; break;
        }
    }
    cout << ((isPossible)? "YES" : "NO" ) << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}