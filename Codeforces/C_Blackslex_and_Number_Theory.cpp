#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void test(int n)
{
    // for (int i = 2; i * i <= n; i++)
    // {
    //   while(n % i == 0)
    //   {
    //      cout << i << " ";
    //      n /= i;
    //   }
    // }
    // if(n > 1) cout << n << nl;

    vector<int> a = {11, 74, 5, 22, 52, 97, 82};
    for(auto e : a)
    {
        cerr << e % 6 << " ";
    }
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    cout << max(a.front(), a[1] - a[0]) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // test(52);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}