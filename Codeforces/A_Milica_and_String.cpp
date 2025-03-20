#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int a = count(all(s), 'A');
    int b = count(all(s), 'B');

    if(k == b)
    {
        cout << 0 << nl; 
    }
    else if(k > b)
    {
        cout << 1 << nl;
        int cnt = 0, op = 0;
        for (int i = 0; i < n; i++)
        {
            if(b == k) break;
            
            if(s[i] == 'A') b++;
            op++;
        }
        cout << op << " B" << nl;
    }
    else if(k < b)  
    {
        cout << 1 << nl;
        int cnt = 0, op = 0;
        for (int i = 0; i < n; i++)
        {
            if(b == k) break;
            
            if(s[i] == 'B') b--;
            op++;
        }
        cout << op << " A" << nl;
    }
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