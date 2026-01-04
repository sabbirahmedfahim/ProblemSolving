#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int getAns(int a, int b)
{
    int res = 0;
    bool who = true;
    for (int i = 0; i < 31; i++)
    {
        if(who) a -= pow(2, i);
        else b -= pow(2, i);

        if(who && a >= 0) res++;
        else if(who == false && b >= 0) res++;
        else break;

        who = !who;
    }

    return res;
}
void solve()
{
    int a, b; cin >> a >> b;

    cout << max(getAns(a, b), getAns(b, a)) << nl;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}