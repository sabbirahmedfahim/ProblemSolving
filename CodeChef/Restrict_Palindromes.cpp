#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    if(n < 5)
    {
        if(n == 1) cout << "a" << nl;
        if(n == 2) cout << "ab" << nl;
        if(n == 3) cout << "abc" << nl;
        if(n == 4) cout << "abcd" << nl;

        return;
    }

    string s = "aaabc";
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        cout << s[curr++];
        if(curr == s.size()) curr = 0;
    }
    cout << nl;
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