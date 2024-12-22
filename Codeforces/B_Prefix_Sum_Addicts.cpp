// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<ll> s(n+1);
    for (int i = n-k+1; i <= n; i++) cin >> s[i]; // 1-based index
    if(k == 1)
    {
        cout << "Yes" << nl; return;
    }
    vector<ll> a(n+1);
    for (int i = n-k+2; i <= n; i++) a[i] = s[i] - s[i-1]; // Use n - k + 2 instead of n - k + 1 because I am accessing (i - 1)
    if(!is_sorted(a.begin() + n - k + 2, a.end())) // not sorted?
    {
        cout << "No" << nl; return;
    }
    if(s[n-k+1] > a[n-k+2] * (n-k+1)) // here's the twist
    {
        cout << "No" << nl; return;
    }

    cout << "Yes" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}