#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    map<pair<int,int>, int> mp;
    mp[{1, 2}] = 3;
    mp[{2, 1}] = 3;
    mp[{1, 3}] = 4;
    mp[{3, 1}] = 4;
    mp[{2, 3}] = -1;
    mp[{3, 2}] = -1;

    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        int x = a[i], y = a[i + 1];
        if(mp[{x, y}] == -1)
        {
            cout << "Infinite" << nl; return 0;
        }

        res += mp[{x, y}];
        if(i+2 < n && a[i] == 3 && a[i + 1] == 1 && a[i + 2] == 2) res--;
    }
    
    cout << "Finite" << nl;
    cout << res << nl;

    return 0;
}