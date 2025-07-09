#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int gcd(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
void solve()
{
    int n; cin >> n; // n <= 20 
    vector<int> a(n + 1);
    int GCD = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
        GCD = gcd(GCD, a[i]);
    }
    
    if(GCD == 1)
    {
        cout << 0 << nl; return;
    }
    if(n == 1)
    {
        cout << 1 << nl; return;
    }
    
    int targetGCD = gcd(a[n], n), curGCD = 0;
    for (int i = 1; i <= n-1; i++)
    {
        curGCD = gcd(curGCD, a[i]);
    }

    if(gcd(curGCD, targetGCD) == 1)
    {
        cout << 1 << nl; return;    
    }

    targetGCD = gcd(a[n-1], n-1), curGCD = 0;
    for (int i = 1; i <= n && n >= 2; i++)
    {
        if(i == n-1) continue;

        curGCD = gcd(curGCD, a[i]);
    }

    if(gcd(curGCD, targetGCD) == 1)
    {
        cout << 2 << nl; return;    
    }

    targetGCD = gcd(a[n], n);
    targetGCD = gcd(targetGCD, n);
    curGCD = 0;
    for (int i = 1; i <= n-1; i++)
    {
        curGCD = gcd(curGCD, a[i]);
    }
    
    cout << min(3, n) << nl;
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

    // cout << gcd(120, 4);

    return 0;
}
