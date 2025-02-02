// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
can i take the benefit of huge time complexity? [4s]
*/
void solve() // TLE
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    int cnt = 0;

    for (int i = 0; i < n-2; i++) // TLE
    {
        // cout << i << " -> " << nl;
        int a = v[i], b = v[i+1], c = v[i+2];

        for (int j = i+1; j < n-2; j++)
        {
            int x = v[j], y = v[j+1], z = v[j+2];
            if(a == x && b == y && c != z) cnt++;
            else if(a == x && b != y && c == z) cnt++;
            else if(a != x && b == y && c == z) cnt++;
        }
    }
    cout << cnt << nl;
}
void solve2()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    // trying to optimize the code
    map<pair<int, int>, int> ab, bc, ac;
    map<tuple<int, int, int>, int> threeInOne; 
    ll ans = 0;
    for (int i = 0; i < n-2; i++)
    {
        int a = v[i], b = v[i+1], c = v[i+2];
        ans += ab[{a, b}]++;
        ans += bc[{b, c}]++;
        ans += ac[{a, c}]++;
        ans -= (3*threeInOne[{a, b, c}]++);
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}