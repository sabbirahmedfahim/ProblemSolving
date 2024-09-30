#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

ll arr[10005][1005];
const ll N = 1e9 + 5;
ll power_func(ll k, ll i, ll ans)
{
    if(i == 0) return ans;
    if(ans <= INT_MAX) arr[k][i] = ans;
    if(arr[k][i] =! -1) return arr[k][i];
    return power_func(k, i-1, ans*k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    memset(arr, -1, sizeof(arr));
    while (t--)
    {
        ll n, k;
        ll ans = 1;
        cin >> n >> k;
        list<ll> l;
        for (int i = 0; i <= n; i++)
        {
            if (power_func(k, i, ans) > n)
                break;
            l.push_back(power_func(k, i, ans));
        }
        ll cnt = 0;
        while (n != 0)
        {
            if (n - l.back() < 0)
            {
                l.pop_back();
            }
            if(n - l.back() < 0) continue;
            n -= l.back();
            cnt++;
        }
        cout << cnt << nl;
    }

    return 0;
}