#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e; cin >> n >> e;
    set<int> justFrnt;
    vector<pair<int,int>> res;
    while (e--)
    {
        int a, b; cin >> a >> b;
        if(justFrnt.count(b)) continue;
        res.push_back({a, b});
        justFrnt.insert(a);
    }
    
    for(auto e : res)
    {
        cout << e.first << ' ' << e.second << nl;
    }

    return 0;
}