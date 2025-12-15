#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<long double> a(n);
    for(auto &e : a) cin >> e;

    if(n == 1)
    {
        cout << fixed << setprecision(10) << a[0] << nl;
        return;
    }

    long double curr = 0, sum = 0, koybar = 0;
    for (int l = 0, r = 0; r < n - 1; r++)
    {
        curr += a[r] + a[r + 1];
        if(r - l + 1 == k - 1)
        {
            sum += curr;

            curr -= a[l] + a[l + 1];
            l++;
            koybar++;
        }
    }

    if(k == 1)
    {
        long double sum = 0;
        for(auto e : a) sum += e;
        cout << fixed << setprecision(10) << sum / (long double) n << nl;
        return;
    }
    cout << fixed << setprecision(10) << (sum / koybar) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}