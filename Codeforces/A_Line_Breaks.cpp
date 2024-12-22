#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    int cnt = 0; bool flag = true;
    while (n--)
    {
        string s; cin >> s;
        if(s.size() > m) flag = false;
        if(flag && s.size() <= m) 
        {
            m -= s.size(); cnt++;
        }
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}