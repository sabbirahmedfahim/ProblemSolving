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
    multiset<int> ml;
    for(auto e : a) ml.insert(e);

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        auto it = ml.find(a[i]);
        ml.erase(it);

        auto itt = --ml.end();
        if((sum - a[i] - *itt) == *itt) res.push_back(i + 1);
        // cerr << *it << " : " << *itt << nl;
        ml.insert(a[i]);
    }
    cout << res.size() << nl;

    if(res.size() > 0)
    {
        print(res);
    }

    return 0;
}