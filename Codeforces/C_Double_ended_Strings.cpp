#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
// size is really minimal, just 20 >= 
void solve()
{
    string x, y; cin >> x >> y;

    int mxLen = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = i; j < x.size(); j++) // eta gpt dekhe likhsi -_-
        {
            string a = x.substr(i, j - i + 1);
            // cout << a << nl;
            if(y.find(a) != -1 && a.size() > mxLen)
            {
                mxLen = a.size();
            }
        }
    }
    
    cout << (x.size() - mxLen) + (y.size() - mxLen) << nl;
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