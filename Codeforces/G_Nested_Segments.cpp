#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(tuple<int, int, int> x, tuple<int, int, int> y)
{
    if(get<0> (x) == get<0> (y)) return get<1> (x) > get<1> (y);
    return get<0> (x) < get<0> (y);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int l, r; cin >> l >> r;
        a[i] = {l, r, i + 1};
    }
    sort(all(a), cmp);
    // for(auto [x, y, z] : a) cout << x << " " << y << nl;

    int prevL = get<0> (a[0]), prevR = get<1> (a[0]), prevIdx = get<2> (a[0]);
    for (int i = 1; i < n; i++)
    {
        auto [x, y, z] = a[i];
        if(prevL <= x && prevR >= y)
        {
            cout << z << " " << prevIdx << nl; return 0;
        }
        prevL = x, prevR = y, prevIdx = z;
    }
    
    cout << -1 << " " << -1 << nl;

    return 0;
}