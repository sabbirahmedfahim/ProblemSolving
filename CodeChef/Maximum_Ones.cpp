#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;
    while (!s.empty() && s.back() == '0')
    {
        s.pop_back();
    }
    n = s.size();
    
    int haveZero = 0, haveOne = 0;
    for(auto e : s) 
    {
        if(e == '0') haveZero++;
        else haveOne++;
    }

    if(n == haveZero) 
    {
        cout << 0 << nl; return;
    }

    int canAdd = min(haveZero, k);
    if(k > 0 && s.back() == '0') canAdd--;
    int res = haveOne + canAdd;
    
    if(res < 0) cout << 0 << nl; 
    else cout << res << nl;
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