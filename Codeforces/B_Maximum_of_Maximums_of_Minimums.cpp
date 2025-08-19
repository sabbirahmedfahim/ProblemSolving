#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    if(k == 1)
    {
        cout << *min_element(all(a)) << nl;
    }
    else if(k == 2)
    {
        cout << max(a.front(), a.back()) << nl;
    }
    else cout << *max_element(all(a)) << nl;

    return 0;
}