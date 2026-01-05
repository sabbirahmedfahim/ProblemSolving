#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    ll sum = accumulate(all(a), 0ll);
    if(sum & 1)
    {
        cout << "NO" << nl;
        return 0;
    }

    int mxEle = *max_element(all(a));
    if(sum / 2 < mxEle)
    {
        cout << "NO" << nl;
        return 0;
    }

    cout << "YES" << nl;

    return 0;
}