// Resolved after understanding the question from the XPSC Solve class, then solved independently
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
case-1: 4 2 2 1 3 1
sol-> 
0-0 index -> |4| -> 1
0-1 index -> |4, 2| -> 2
0-2 index -> |4, 2, 2| -> |4, 4| -> |8| -> 1
0-3 index -> |8, 1| -> 2
0-4 index -> |8, 1, 3| -> 3
0-5 index -> |8, 1, 3, 1| -> |8, 3, 2| -> 3
ANS: 1 2 1 2 3 3
*/
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    set<ll> distictElements;
    for (int i = 0; i < n; i++)
    {
        if(distictElements.count(v[i])) 
        {
            ll data = v[i];
            while (distictElements.count(data))
            {
                distictElements.erase(data);
                data *= 2;
            }
            distictElements.insert(data);
            cout << distictElements.size() << " ";
        }
        else 
        {
            distictElements.insert(v[i]);
            cout << distictElements.size() << " ";
        }
    }
    cout << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}