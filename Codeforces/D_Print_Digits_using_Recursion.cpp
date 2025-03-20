#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void print_digits(int n)
{
    if(n == 0) return;

    print_digits(n/10);
    cout << n%10 << ' ';
}
void solve()
{
    int n; cin >> n;

    if(n == 0)
    {
        cout << 0 << nl; return;
    }
    
    print_digits(n);

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