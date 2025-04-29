#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1); 
    multiset<int> ml;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ml.insert(a[i]);
    }

    vector<long long int> suffixSum(n + 1);
    suffixSum[1] = a[n];
    for (int i = 2, j = n-1; i <= n; i++, j--)
    {
        suffixSum[i] = suffixSum[i-1] + a[j];
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << suffixSum[i] << " ";
    // }
    // cout << nl;
    // 13 28 36 50 60 65 78

    for (int i = 1, j = n; i <= n; i++, j--)
    {
        if(j == 1 && i == n) // ekh e kotha 
        {
            cout << suffixSum[i] << " ";
            auto it = a[n];
        }
        else 
        {
            // print(ml);
            auto it = ml.find(a[j]);
            ml.erase(it);

            auto arektaEle = --ml.end();

            ll data = max(suffixSum[i], suffixSum[i] - a[j] + *arektaEle);
            cout << data << " ";
        }
    }
    cout << nl;
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