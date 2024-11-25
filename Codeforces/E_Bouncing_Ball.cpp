#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<ll> dq(n); for(auto &data : dq) cin >> data;

    bool leftSum = true; ll l = 0, r = 0, cntZero = 0;
    for (int i = 0; i < n; i++)
    {
        if(dq[i] == 0) 
        {
            leftSum = false; cntZero++;
        }
        if(leftSum) l += dq[i];
        if(!leftSum) r += dq[i]; 
    }
    // cout << l << " " << r << nl;
    cout << ((l == r && cntZero == 1
    )? 2 : 1) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}