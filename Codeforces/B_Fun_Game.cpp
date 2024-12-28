#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s, t; cin >> n >> s >> t;
    if(s.front() == '1' || s == t) cout << "YES" << nl;
    else 
    {
        bool is_found = false;
        for (int i = 0; i < s.size() && !is_found; i++)
        {
            if(s[i] == '1') is_found = true;
            else if(t[i] == '1') break;
        }
        if(is_found) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int T; cin >> T; 
    while (T--) solve();

    return 0;
}