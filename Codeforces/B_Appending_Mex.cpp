#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int need = 0;
    int smallest_wrong_steps_idx;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < need);
        else if(a[i] == need)
        {
            need++;
        }
        else 
        {
            smallest_wrong_steps_idx = i+1; // 1-based index
            cout << smallest_wrong_steps_idx << nl; return 0;
        }
    }

    cout << -1 << nl;

    return 0;
}