#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll Pow(ll a, ll b) // O(log b)
{ 
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}
int getAns(vector<int> a, vector<int> b)
{
    int cnt = 0;
    for (int i = 0; i < 30; i++)
    {
        if(a[i] != b[i]) cnt++;
    }
    return cnt;
}
vector<int> getBinaryForm(int n)
{
    vector<int> res(30);
    for (int i = 0; i < 30; i++)
    {
        res[i] = (n >> i) & 1;
    }
    return res;
}
void tEst()
{
    int n = 20;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += getAns(getBinaryForm(i), getBinaryForm(i + 1));
    }
    
    cout << res << nl;

    // for (int i = 0; i < 61; i++)
    // {
    //     cout << Pow(2, i) << nl;
    // }
}
void solve()
{
    ll n; cin >> n;

    if(__builtin_popcountl(n) == 1)
    {
        cout << Pow(2, __lg(n) + 1) - 1 << nl;
        return;
    }

    ll res = Pow(2, __lg(n) + 1) - 1;
    // cout << res << nl;

    int onCount = 0;
    for (int i = 63; i >= 0; i--)
    {
        if((n >> i) & 1) 
        {
            onCount++;
            if(onCount == 2) res++;
            if(onCount <= 2) continue;
        }

        if(onCount >= 2)
        {
            res += Pow(2, i);
            if((n >> i) & 1) res++;
        }
    }

    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // tEst();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}