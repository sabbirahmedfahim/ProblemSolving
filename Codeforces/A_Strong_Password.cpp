#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s; cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            (s[i] != 'a')? s.insert(i+1, 1, 'a') : s.insert(i+1, 1, 'b');
            cout << s << nl; return;
        }
    }
    (s.back() != 'a')? s += 'a' : s += 'b';
    cout << s << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
