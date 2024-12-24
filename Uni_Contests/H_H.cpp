#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n,q; cin >> n >> q;
    multiset<ll> ml;
    while (n--)
    {
        ll data; cin >> data; ml.insert(data);
    }
    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 0)
        {
            ll data; cin >> data; ml.insert(data);
        }
        else if(cmd == 1)
        {
            cout << *ml.begin() << nl;
            ml.erase(ml.begin());
        }
        else 
        {
            cout << *--ml.end() << nl;
            ml.erase(--ml.end());
        }
    }
    

    return 0;
}