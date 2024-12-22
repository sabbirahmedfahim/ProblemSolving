// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    if(n == 1)
    {
        cout << 1 << nl; return;
    }
    if(n >= 2 && n <= 4)
    {
        cout << 2 << nl; return;
    }
    int sum = 4, op = 2;
    while (sum < n)
    {
        sum++;
        sum *= 2;
        op++;
    }
    cout << op << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}