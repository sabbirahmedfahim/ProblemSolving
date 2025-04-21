#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool canWePlace(int dist, vector<int> a, int cows)
{
    int cur = a[0], cnt = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i] - cur >= dist)
        {
            cnt++;
            cur = a[i];
        }
        if(cnt == cows) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int stalls, cows; cin >> stalls >> cows;
    vector<int> a(stalls); for(auto &e : a) cin >> e;
    sort(all(a));

    ll lo = 0, hi = 1E9, res = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(canWePlace(mid, a, cows))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << res << nl;

    return 0;
}