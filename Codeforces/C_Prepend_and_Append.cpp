// easy
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
    string s; cin >> s;
    list <char> l;
    for(auto ch : s) l.push_back(ch);
    while (l.front() == '0' && l.back() == '1' || l.front() == '1' && l.back() == '0')
    {
        l.pop_front(); l.pop_back();
    }
    cout << l.size() << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}