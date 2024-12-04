#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int q; cin >> q;
    vector<ll> v;
    while (q--)
    {
        ll cmd; cin >> cmd;
        if(cmd == 0)
        {
            ll data; cin >> data; v.push_back(data);
        }
        else if(cmd == 1)
        {
            int idx; cin >> idx; cout << v[idx] << nl;
        }
        else v.pop_back();
    }
    

    return 0;
}