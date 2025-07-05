#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    multiset<ll> ml;
    while (n--)
    {
        int data; cin >> data;
        ml.insert(data);
    }
    
    vector<int> a(m);
    for(auto &e : a) cin >> e;
    sort(all(a));

    int cnt = 0;
    for(auto e : a)
    {
        auto it = ml.lower_bound(e - k);
        if(it != ml.end() && (*it <= (e + k)))
        {
            cnt++;
            ml.erase(it);
        }
    }

    cout << cnt << nl;

    return 0;
}

