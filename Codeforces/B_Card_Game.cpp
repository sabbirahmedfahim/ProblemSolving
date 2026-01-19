// resolved from the editorial (-_-)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int getAns(int x, int y)
{
    if(x > y) return 1;
    else if(x < y) return -1;
    else return 0;
}
void solve()
{
    int a,b,c,d; cin >>a>>b>>c>>d;

    int res = 0;
    if((getAns(a, c) + getAns(b, d) > 0)) res++;
    if((getAns(a, d) + getAns(b, c) > 0)) res++;
    if((getAns(b, c) + getAns(a, d) > 0)) res++;
    if((getAns(b, d) + getAns(a, c) > 0)) res++;

    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}