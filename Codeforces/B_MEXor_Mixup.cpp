#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int prefixXOR(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}
int LtoR_XOR(int L, int R)
{
    return prefixXOR(R) ^ prefixXOR(L-1);
}
void solve()
{
    int a, b; cin >> a >> b;

    int cur = LtoR_XOR(0, a-1);
    // cout << cur << " -> ";
    int cnt = a;

    if(cur == b) cout << cnt << nl;
    else 
    {
        int XOR = (cur ^ b);
        if(XOR != a) 
        {
            cout << cnt + 1 << nl;
        }
        else cout << cnt + 2 << nl;
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