#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    string s; cin >> s;

    while (q--)
    {
        int data; cin >> data;

        int cnt = 0;

        bool haveB = false;
        for(auto e : s) if(e == 'B') haveB = true;

        if(!haveB)
        {
            cout << data << nl; continue;
        }

        while (data)
        {
            for (int i = 0; i < n && data; i++)
            {
                if(s[i] == 'A') data--;
                else data /= 2;

                cnt++;
            }
        }
        cout << cnt << nl;
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