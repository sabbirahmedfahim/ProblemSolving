#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int tot_op(int a, int b)
{
    int op = 0;
    while (a)
    {
        op++;
        a /= b;
        // cout << a << nl;
        if(a == b && a == 1) a = 0, op++;
    }
    return op;
}
void solve()
{
    int a, b; cin >> a >> b;
    
    int op = 1E9;
    for (int i = 100; i >= 1; i--)
    {
        op = min(op, tot_op(a, b + i) + i);
    }
    if(a/b == 0) op = 1;
    if(b > 1) op = min(op, tot_op(a, b));

    cout << op << nl;
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