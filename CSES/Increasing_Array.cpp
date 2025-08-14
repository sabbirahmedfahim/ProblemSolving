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
    vector<int> a(n), b;
    for(auto &e : a) cin >> e;
    b = a;

    for (int i = 1; i < n; i++)
    {
        a[i] = max(a[i], a[i - 1]);
    }

    ll totMove = 0;
    for (int i = 0; i < n; i++)
    {
        totMove += a[i] - b[i];
    }

    cout << totMove << nl;

    return 0;
}