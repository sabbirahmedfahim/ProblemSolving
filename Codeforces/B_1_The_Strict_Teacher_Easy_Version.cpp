#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m, q; cin >> n >> m >> q;
    multiset<int> ml;
    for (int i = 0; i < m; i++)
    {
        int data; cin >> data;
        ml.insert(data);
    }

    while (q--)
    {
        int davidsCellNo; cin >> davidsCellNo;
        int l = *ml.begin(), r = *--ml.end();
        if(l > davidsCellNo) cout << l - 1<< nl;
        else if(r < davidsCellNo) cout << n - r << nl;
        else 
        {
            auto upperIt = ml.upper_bound(davidsCellNo);
            auto lowerIt = upperIt--;
            cout << (*lowerIt-*upperIt)/2 << nl;
        }
    }
}
int main()
{
    iOS 

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
