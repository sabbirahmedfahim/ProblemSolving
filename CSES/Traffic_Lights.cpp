// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll x, n; cin >> x >> n; vector<ll> v(n); for(auto &data : v) cin >> data;

    set<ll> position;
    position.insert(0);
    // position.insert(n);
    position.insert(x);

    multiset<ll> length;
    // length.insert(n);
    length.insert(x);

    for(auto data : v)
    {
        position.insert(data);
        auto it = position.find(data);
        auto previousValue = *prev(it);
        auto nextValue = *next(it);

        length.erase(length.find(nextValue - previousValue));
        length.insert(nextValue - data);
        length.insert(data - previousValue);
        cout << *length.rbegin() << " ";
    }

    return 0;
}