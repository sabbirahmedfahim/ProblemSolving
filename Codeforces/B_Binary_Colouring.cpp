// favourite one :D
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int x; cin >> x;
    deque<int> dq;

    // bitwise representation of x
    for (int i = 30; i >= 0; i--)
    {
        if((x >> i) & 1) dq.push_back(1);
        else dq.push_back(0);
    }

    // for (int i = dq.size()-1; i >= 3; i--)
    for (int i = dq.size()-1; i >= 1; i--)
    {
        if(dq[i] == 1 && dq[i-1] == 1)
        {
            dq[i] = -1; i--;
            // while (dq[i] == 1 && i>=3)
            while (dq[i] == 1 && i>=1)
            {
                dq[i] = 0; 
                i--;
            }
            // if(i >= 2) dq[i] = 1;
            if(i >= 0) dq[i] = 1;
            i++; // i missed the increment
        }
    }

    // while (dq.front() == 0) dq.pop_front();
    cout << dq.size() << nl;
    reverse(all(dq));
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();
    
    return 0;
}

