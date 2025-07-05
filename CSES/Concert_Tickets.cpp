#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    multiset<int> ml;
    while (n--)
    {
        int data; cin >> data;
        ml.insert(data);
    }
    
    while (m--)
    {
        int mxPrice; cin >> mxPrice;

        auto it = ml.upper_bound(mxPrice);
        if(it == ml.begin()) cout << -1 << nl;
        else 
        {
            it--;
            cout << *it << nl;
            ml.erase(it);
        }
    }
    

    return 0;
}