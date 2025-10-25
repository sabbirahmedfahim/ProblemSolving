#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cerr << e << " "; cerr << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> prime_fact;
    for(auto e : a)
    {
        set<int> divisors;
        for (int i = 2; i * i <= e; i++)
        {
            while (e % i == 0)
            {
                divisors.insert(i);
                e /= i;
            }
        }
        if(e > 2) divisors.insert(e);
        print(divisors);

        for(auto data : divisors)
        {
            prime_fact[data]++;
        }
    }

    for(auto [x, y] : prime_fact)
    {
        cout << x << " : " << y << nl;
    }
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