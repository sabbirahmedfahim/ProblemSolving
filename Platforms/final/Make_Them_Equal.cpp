#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string a, b; cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i]) cnt++;
    }
    if(k-cnt >= 0) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}