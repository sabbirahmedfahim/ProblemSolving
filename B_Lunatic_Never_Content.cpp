#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int gcd(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin>>e;
    sort(all(a));

    if(a[0] == 0) 
    {
        cout << 0 << nl; return;
    }
   
    int GCD = 0;
    for(auto e : a) GCD = gcd(GCD, e);

    cout << GCD << nl;
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