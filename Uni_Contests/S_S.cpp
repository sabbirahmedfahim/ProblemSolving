#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, q; cin >> n >> q;
    vector< vector<ll> > v(n);
    while (q--)
    {
        ll cmd; cin >> cmd;
        if(cmd == 0)
        {
            ll pos, data; cin >> pos >> data;
            v[pos].push_back(data);
        }
        else if(cmd == 1) // note that: do not print the space after the last element
        {
            ll pos; cin >> pos;
            if(v[pos].empty()) cout << nl;
            else 
            {
                vector<ll> tmp = v[pos];
                for (int i = 0; i < tmp.size(); i++)
                {
                    if(i == tmp.size()-1) cout << tmp[i];
                    else cout << tmp[i] << " ";
                }
                cout << nl;
            }
        }
        else
        {
            ll pos; cin >> pos;
            if(!v[pos].empty()) v[pos].clear();
        }
        // for(auto data : v) print(data);
    }
    

    return 0;
}