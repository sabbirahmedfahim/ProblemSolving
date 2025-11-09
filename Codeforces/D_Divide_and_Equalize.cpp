#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> primeFactors;
    for (int i = 0; i < n; i++)
    {
        int data = a[i];
        for (int j = 2; j * j <= data; j++)
        {
            while (data % j == 0)
            {
                primeFactors[j]++;
                data /= j;
            }
        }
        if(data > 1) primeFactors[data]++;
    }
    
    for(auto [x, y] : primeFactors)
    {
        if(y % n != 0)
        {
            cout << "NO" << nl; 
            return;
        }
    }

    cout << "YES" << nl;
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