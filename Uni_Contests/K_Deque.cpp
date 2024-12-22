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
    deque<ll> dq;
    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 0)
        {
            int op, x; cin >> op >> x;
            if(op == 0) dq.push_front(x);
            else dq.push_back(x);
        }
        else if(cmd == 1)
        {
            int pos; cin >> pos; cout << dq[pos] << nl;
        }
        else 
        {
            int op; cin >> op;
            if(op == 0) dq.pop_front();
            else dq.pop_back();
        }
    }

    return 0;
}