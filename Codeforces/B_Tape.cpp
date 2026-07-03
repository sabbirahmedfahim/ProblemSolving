#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    vector<int> diff;
    for (int i = 0; i < n - 1; i++)
    {
        diff.push_back(a[i + 1] - a[i] - 1);
    }
    sort(all(diff)); 

    int sum = a.back() - a.front() + 1;
    for (int i = 0; i < k - 1 && !diff.empty(); i++)
    {
        sum -= diff.back();
        diff.pop_back();
    }
    
    cout << sum << nl;

    return 0;
}