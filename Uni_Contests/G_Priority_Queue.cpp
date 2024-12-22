#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    vector<priority_queue<ll> > pq(n);
    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 0)
        {
            int idx; ll data; cin >> idx >> data; pq[idx].push(data);
        }
        else if(cmd == 1)
        {
            int idx; cin >> idx; if(!pq[idx].empty()) cout << pq[idx].top() << nl;
        }
        else
        {
            int idx; cin >> idx; if(!pq[idx].empty()) pq[idx].pop();
        }
    }

    return 0;
}