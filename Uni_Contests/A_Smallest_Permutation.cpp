#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if(i + 1 == n)
        {
            if(*s.begin() != i && *--s.end() != i + 1) cout << *s.begin() << " " << *--s.end() << " ";
            else cout << *--s.end() << " " << *s.begin() << " ";
            break;
        }
        for(auto &e : s)
        {
            if(e != i)
            {
                cout << e << " ";
                s.erase(e); break;
            }
        }
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